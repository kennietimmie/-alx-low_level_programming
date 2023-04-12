#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to create.
 * @text_content:  text content for the file
 *
 * Return: on success 1 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t nbyte = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[nbyte])
			nbyte++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, nbyte) == -1)
		return (-1);
	close(fd);
	return (1);
}
