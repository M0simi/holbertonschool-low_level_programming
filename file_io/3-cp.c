#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <math.h>
#include <string.h>
/**
 * open_source - Opens the source file for reading.
 * @file: Name of the source file.
 * Return: File descriptor or exit with code 98 on failure.
 */
int open_source(char *file)
{
	int fd = open(file, O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (fd);
}

/**
 * open_dest - Opens or creates the destination file for writing.
 * @file: Name of the destination file.
 * Return: File descriptor or exit with code 99 on failure.
 */
int open_dest(char *file)
{
	int fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (fd);
}

/**
 * copy_content - Copies content from source file to destination file.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 * @src: Source filename (for error messages).
 * @dest: Destination filename (for error messages).
 */
void copy_content(int fd_from, int fd_to, char *src, char *dest)
{
	ssize_t rd, wr;
	char buffer[1024];

	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_fd - Closes a file descriptor; exits with code 100 on error.
 * @fd: File descriptor to close.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point. Copies content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: 0 on success, exits with relevant code on failure.
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_source(av[1]);
	fd_to = open_dest(av[2]);
	copy_content(fd_from, fd_to, av[1], av[2]);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
