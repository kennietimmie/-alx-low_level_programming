#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap two int value
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

