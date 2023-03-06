#include "main.h"
/**
 * _strstr - finds the first occurrence of the 
 * substring needle in the string haystack.
 * @haystack: pointer to string.
 * @needle: pointer to sub string.
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *aneedle, *ahaystack;

	while (*haystack != '\0')
	{
		aneedle = needle;
		ahaystack = haystack;
		while (*ahaystack != '\0' && *aneedle != '\0' && *aneedle == *ahaystack)
		{
			ahaystack++, aneedle++;
		}
		if (*aneedle == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
