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
	unsigned int i = 0, j, k, s1len = 0, s2len = 0;
	char *str;

	while ((s1 && s1[s1len]) || (s2 && s2[s2len]))
	{
		if (s1 && s1[s1len])
			s1len++;
		if (s2 && s2[s2len])
			s2len++;
	}

	s1len--;
	s2len--;
	str = malloc(sizeof(char) * (s1len + n + 1));

	if (str == NULL)
		return (str);

	/* add first string */
	for (j = 0; s1 && s1[j]; i++, j++)
		str[i] = s1[j];

	/* add second string */
	for (k = 0; s2 && s2[k] && k < n; k++, i++)
		str[i] = s2[k];

	str[i] = '\0';
	return (str);
}

