#include "main.h"

/**
 * leet - encode string.
 * @s: string
 *
 * Return: pointer to string.
 */
char *leet(char *s)
{
	int i = 0;
	
	while (*(s + i))
	{
		switch (*(s + i))
		{
			case ('a'):
			case ('A'):
				*(s + i) = '4';
				break;
			case ('e'):
			case ('E'):
				*(s + i) = '3';
				break;
			case ('o'):
			case ('O'):
				*(s + i) = '0';
				break;
			case ('t'):
			case ('T'):
				*(s + i) = '7';
				break;
			case ('l'):
			case ('L'):
				*(s + i) = '1';
				break;
		}
		i++;
	}
	
	return (s);
}

