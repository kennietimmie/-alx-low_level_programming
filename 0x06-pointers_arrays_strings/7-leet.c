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
	char decode[] = "aeotlAEOTL";
	int encode[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};
	
	while (*(s + i))
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == decode[j])
			{
				*(s + i) = encode[j];
				break;
			}
		}
		i++;
	}
	
	return (s);
}

