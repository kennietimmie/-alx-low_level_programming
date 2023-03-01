#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase in a string.
 * @s: input string.
 *
 * Return: s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if(*(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}

	return (s);
}

