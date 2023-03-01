#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two string limit to n byte size.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Bytes size.
 *
 * Return: Always char *.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (j < n && *(src + j))
	{
		*(dest + i) = * (src + j);
		j++, i++;
	}
	return (dest);
}
int main (void)
{
	char dest[90] = "Hello ";
	char src[] = "World!\n";
	char *ptr;

	printf("%s\n", dest);
	printf("%s", src);

	ptr = _strncat(dest, src, 1);

	printf("%s\n", dest);
	printf("%s", src);
	printf("%s\n", ptr);

	ptr = _strncat(dest, src, 1024);

	printf("%s", dest);
	printf("%s", src);
	printf("%s", ptr);
	
	return (0);
}	

