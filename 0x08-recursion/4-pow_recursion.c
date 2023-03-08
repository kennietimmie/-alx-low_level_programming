#include "main.h"

/**
 * _pow_recursion - calculate x raised to the power of y.
 * @x: number
 * @y: raised to.
 *
 * Return: x to the power of y, -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (-1);
}

