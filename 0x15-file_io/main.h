#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
