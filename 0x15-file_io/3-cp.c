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
	ssize_t nbyte_r, nbyte_w;
	mode_t mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, mode);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file $%s\n", argv[1]);
		exit(98);
	}

	buff = malloc(sizeof(char) * BYTE_SIZE);
	if (file_to == -1 || !buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	nbyte_r = read(file_from, buff, BYTE_SIZE);
	while (nbyte_r)
	{
		nbyte_r = read(file_from, buff, BYTE_SIZE);
	}

	free(buff);
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
