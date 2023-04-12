#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of file to open.
 * @letters:  number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * otherwise return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t number_p, nbyte;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(letters));

	if (fd == -1 || !buf)
		return (0);

	nbyte = read(fd, buf, letters);
	number_p = write(STDOUT_FILENO, buf, nbyte);

	free(buf);
	close(fd);

	return (number_p);
}
