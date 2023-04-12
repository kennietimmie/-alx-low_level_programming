#include "main.h"

/**
 * create_file - a function that creates a file
 * to the POSIX standard output.
 * @filename: name of file to create.
 * @text_content:  text content for the file
 *
 * Return: on success 1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;
	size_t nbyte = 0;
	char *str = text_content;

	if (!filename)
		return (-1);

	while (*str++)
		nbyte++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
		return (-1);

	if (write(fd, text_content, nbyte) == -1)
		return (-1);

	close(fd);
	return (1);
}
