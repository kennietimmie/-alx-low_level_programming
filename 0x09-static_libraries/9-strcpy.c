#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string from src to dest.
 * @dest: String destination.
 * @src: String source
 *
 * Return: Always char *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
/**
 * main - Main file
 *
 * Return: 0
*/
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code.\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}

