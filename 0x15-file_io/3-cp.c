#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: numbers of passed argument.
 * @argv: pointer to passed argument
 *
 * Return: Always 0.
 */
int main(int argc __attribute__ ((unused)), char *argv[] __attribute__ ((unused)))
{
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
