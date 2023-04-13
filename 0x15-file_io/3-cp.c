#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: numbers of passed argument.
 * @argv: pointer to passed argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] )
{
	int file_from, file_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, mode);

	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * close_file - close a file descriptor
 * @fd: file descriptor.
 *
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
