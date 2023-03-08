#include "main.h"

/**
 * is_prime_number - gets prime number
 * @n: number
 *
 * Return: 1 if is prime number otherwise return 0.
 *
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	if ((n % 2) != 0 && (n % 3) != 0 && (n % 5) != 0 && (n % 7) != 0 && n != 1)
		return (1);
	return (0);
}

