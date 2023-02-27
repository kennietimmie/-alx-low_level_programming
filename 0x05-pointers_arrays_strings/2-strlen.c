#include "main.h"

/**
 * _strlen - Return string length
 * @s: string
 *
 * Return: Always int
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *(s + i); i++)
		;
	return (i);
}

