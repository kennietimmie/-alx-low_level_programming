#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

/**
 * reset - Set value to 98
 *
 * Return: Always void
 */
void reset_to_98(int *n)
{
	*n = 98;
}

