#include "main.h"

/**
 * leet - encode string.
 * @s: string
 *
 * Return: pointer to string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char lower[] = "aeotl", upper[] = "AEOTL";
	int num[] = {52, 51, 48, 55, 49};
	
	while (*(s + i))
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == lower[j] || *(s + i) == upper[j])
			{
				*(s + i) = num[j];
			}
		}
		i++;
	}
	
	return (s);
}

