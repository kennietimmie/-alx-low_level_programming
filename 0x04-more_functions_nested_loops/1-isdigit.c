#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: 1 if uppercase otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
