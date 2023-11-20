#include "main.h"
/**
 * _strcat - concatenate two string.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: pointer to destination.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	src_len = 0;
	while (src_len >= 0)
	{
		dest[dest_len] = src[src_len];
		if (src[src_len] == '\0')
		{
			break;
		}
		src_len++;
		dest_len++;
	}
	return (dest);
}

