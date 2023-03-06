#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to initial segment.
 * @accept: pointer to accepted bytes.
 *
 * Return: n number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, stop;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		stop = 1;
		j = 0;
		do
		{
			if (*(s + i) == *(accept + j))
			{
				stop = 0;
				break;
			}
			j++;
		} 
		while (*(accept + j) != '\0');
		if (stop)
			break;
	}
	return (i);
}
