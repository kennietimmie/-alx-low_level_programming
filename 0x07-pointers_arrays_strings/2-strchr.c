#include "main.h"
/**
 * strchr - finds a character in a string.
 * @s: pointer to string.
 * @c: character to locate.
 *
 * Return: pointer to first occurence of c.
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
