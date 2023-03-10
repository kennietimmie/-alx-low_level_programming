#include "main.h"
/**
 * _strncpy -  copies a string.
 * at most n bytes of src are copied.
 * if length of src is < n, additional null bytes are written to dest
 * to ensure that a total of n bytes are written.
 * @dest: destination string.
 * @src: source string.
 * @n: number of string to copy.
 *
 * Return: pointer to destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bytes = 0;

	while (bytes < n && src[bytes] != '\0')
	{
		dest[bytes] = src[bytes];
		bytes++;
	}
	while (bytes < n)
		dest[bytes++] = '\0';
	return (dest);
}
