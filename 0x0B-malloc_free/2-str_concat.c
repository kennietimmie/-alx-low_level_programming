#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinate two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: if success pointer to concatinated string otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, s1len = 0, s2len = 0;
	char *cstr;

	if (s1 != NULL)
		while (s1[s1len] != '\0')
			s1len++;
	if (s2 != NULL)
		while (s2[s2len] != '\0')
			s2len++;

	cstr = malloc(sizeof(char) * (((s1len + s2len)) ? (s1len + s2len) : 1));
	if (cstr == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			cstr[i] = s1[i];
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; i++, j++)
			cstr[i] = s2[j];
	if (i)
	{
		cstr[i] = '\0';
		return (cstr);
	}
	return (NULL);
}

