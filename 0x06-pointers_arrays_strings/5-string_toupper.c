#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase in a string.
 * @s: input string.
 *
 * Return: s.
 */
char *string_toupper(char *s)
{
	int length;
	
	length = 0;

	while (*(s + length) != '\0')
	{
		if (*(s + length) >= 97 && *(s + length) <= 122)
		{
			*(s + length) = *(s + length) - 32;
		}
		length++;
	}

	return (s);
}

