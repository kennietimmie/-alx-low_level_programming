#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: numbers of passed argument.
 * @argv: pointer to passed argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nbyte_r, nbyte_w;
	mode_t mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char *buff;

	if (argc != 3)
		usage();

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, mode);

	buff = malloc(sizeof(char) * BYTE_SIZE);
	if (file_to == -1 || !buff)
	{
		free(buff);
		write_error(argv[2]);
	}

	nbyte_r = read(file_from, buff, BYTE_SIZE);
	if (file_from == -1 || nbyte_r == -1)
		read_error(argv[1]);


	for (; nbyte_r; nbyte_r = read(file_from, buff, BYTE_SIZE))
	{
		nbyte_w = write(file_to, buff, nbyte_r);

		if (nbyte_w == -1)
		{
			free(buff);
			write_error(argv[2]);
		}

		if (nbyte_r == -1)
			read_error(argv[1]);
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

/**
 * read_error - handle read error
 * @str: message.
 *
 * Return: void
 */
void read_error(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * write_error - handle read error
 * @str: message.
 *
 * Return: void
 */
void write_error(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
 * usage -  usage message
 *
 * Return: void
 */
void usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
