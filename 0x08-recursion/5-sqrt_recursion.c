#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - get the natural square
 * root of a number.
 * @n: number.
 *
 * Return: square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - calculate the perfect square
 * of a number.
 * @n: number to square root
 * @i: possible square root accumlator.
 *
 * Return: square root of n or -1.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i != n && i < n / 2)
		return (_sqrt_helper(n, i + 1));
	if (i * i == n)
		return (i);
	return (-1);
}

