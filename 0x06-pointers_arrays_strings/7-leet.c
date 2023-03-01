#include "main.h"

/**
 * leet - encode string.
 * @s: string
 *
 * Return: pointer to string.
 */
char *leet(char *s)
{
	int i = 0;
	char c;
	
	while (*(s + i))
	{
		c = *(s + i);
		if (c == 'a' || c == 'A')
			*(s + i) = '4';
		if (c == 'e' || c == 'E')
			*(s + i) = '3';
		if (c == 'o' || c == 'O')
			*(s + i) = '0';
		if (c == 't' || c == 'T')
			*(s + i) = '7';
		if (c == 'l' || c == 'L')
			*(s + i) = '1';
		i++;
	}
	
	return (s);
}

