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
	int i, j;

	for (i = 0; *(dest + i); i++)
		;
	for (j = 0; j >= 0; j++, i++){
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
	}

	return(dest);
}

