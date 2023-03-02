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

        while (*(dest + i))
                i++;

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	
        return (dest);
}

