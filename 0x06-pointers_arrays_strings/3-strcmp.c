#include "main.h"
/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: value less than 0 if string is less than the other.
 * value greater than 0 if string is greater than the other.
 * 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmp_val;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0' && s2[counter] != '\0')
	{
		counter++;
	}
	cmp_val = s1[counter] - s2[counter];
	return (cmp_val);
}

