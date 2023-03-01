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
		if(*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}

	return (s);
}

