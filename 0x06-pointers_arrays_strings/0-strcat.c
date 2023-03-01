#include "main.h"

/**
 * _strcat - Concatenate two string.
 * @dest: String destination.
 * @src: String source
 *
 * Return: Always char *
 */
char *_strcat(char *dest, char *src)
{
        int i = 0, j = 0;

        while (dest[i])
                i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++, j++;
	}

        dest[i] = '\0';
        return dest;
}

