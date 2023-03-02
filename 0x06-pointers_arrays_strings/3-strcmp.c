#include "main.h"
/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Always int.
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmp;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0'){
		counter++;
	}
	cmp = s1[counter] - s2[counter];
	return (cmp);
}

