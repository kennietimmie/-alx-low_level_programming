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
        int i = 0;
	int j = 0;

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

