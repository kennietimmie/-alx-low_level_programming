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
			*(s + i) = 52;
		if (c == 'e' || c == 'E')
			*(s + i) = 51;
		if (c == 'o' || c == 'O')
			*(s + i) = 48;
		if (c == 't' || c == 'T')
			*(s + i) = 55;
		if (c == 'l' || c == 'L')
			*(s + i) = 49;
		i++;
	}
	
	return (s);
}

