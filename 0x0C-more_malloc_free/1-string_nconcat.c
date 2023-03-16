#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of string to concat
 *
 * Return: If success pointer to new space otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, st, s1len = 0, s2len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1len] || s2[s2len])
	{
		if (s1[s1len])
			s1len++;
		if (s2[s2len])
			s2len++;
	}

	if (n > s2len)
		n = s2len;
	st = s1len + n;
	str = malloc(sizeof(char) * (st + 1));

	if (str == NULL)
		return (str);

	/* add first string */
	for (i = 0; i < st; i++)
	{
		if (i < s1len)
			str[i] = s1[i];
		else
			str[i] = s2[i - s1len];
	}
	str[i] = '\0';
	return (str);
}
