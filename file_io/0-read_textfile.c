#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * Returns 0 if the file cannot be opened or read,
 * if filename is NULL, or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read from the file */
	r_bytes = read(fd, buffer, letters);
	if (r_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write to standard output */
	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	if (w_bytes == -1 || w_bytes != r_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Clean up and return number of bytes written */
	free(buffer);
	close(fd);
	return (w_bytes);
}
