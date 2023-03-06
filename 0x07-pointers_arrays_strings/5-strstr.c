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
	int i, j, k;
	
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		j = i;
		for (k = 0; *(needle + k) != '\0' && *(haystack + j) == *(needle + k); k++, j++)
			;
		if (*(needle + k) == '\0')
			return (haystack + i);
	}
	return (0);
}
