#include "main.h"

/**
 * _strcat - concatenate two string.
 * @dest: destination.
 * @src: source.
 *
 * Return: pointer to destination.
 */
char *_strcat(char *dest, char *src)
{
        char *save = dest;

	for (; *dest; ++dest);
	while (*dest++ = *src++);
	return(save);
}

