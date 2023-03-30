#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: character to check
 *
 * Return: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}
