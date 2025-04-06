#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void check_close(int fd);

/**
 * main - Entry point of the program. Copies content from one file to another.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, or exits with relevant error codes.
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from_fd);
		exit(99);
	}

	while ((r_bytes = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(to_fd, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}

	check_close(from_fd);
	check_close(to_fd);

	return (0);
}

/**
 * check_close - Checks if a file descriptor is closed properly.
 * @fd: File descriptor to close.
 *
 * If closing fails, the function prints an error and exits with code 100.
 */

void check_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
