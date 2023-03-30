#include "main.h"

/**
 * _isalpha - check if a character is alphabet
 * @c: character to check
 *
 * Return: 1 if c is lowercase otherwise 0
 */
int _isalpha(int c)
{
	if (c < 'A' || c > 'z')
		return (0);
	return (1);
}
