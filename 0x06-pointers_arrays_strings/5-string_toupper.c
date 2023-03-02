#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer to string.
 *
 * Return: pointer to uppercase string.
 */
char *string_toupper(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= 97 && s[length] <= 122)
		{
			s[length] = s[length] - 32;
		}
		length++;
	}
	return (s);
}
