#include "main.h"

/**
 * cap_string - capitalize all words in a string.
 * @s: string
 *
 * Return: pointer to string.
 */
char *cap_string(char *s)
{
	int i = 0, is_lower, is_special;
	char prev;

	while (*(s + i))
	{
		is_lower = *(s + i) >= 97 && *(s + i) <= 122;
		prev = i > 0 ? *(s + (i - 1)) : '\0';
		is_special = prev == ' ' || prev == '\t' || prev == '\n'
			|| prev == ',' || prev == ';' || prev == '.'
			|| prev == '!' || prev == '?' || prev == '"'
			|| prev == '(' || prev == ')' || prev == '{'
			|| prev == '}';
		if (i == 0 && is_lower)
			*(s + i) = *(s + i) - 32;
		else
			if (is_special && is_lower)
				*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}

