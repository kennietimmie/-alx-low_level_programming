#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes and prints the sum of all the
 * multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t sum_of_multiples_3_and_5_below_1024 = 3;
	int i = 1;

	for (i = 4; i < 1024; i++)

		if (i % 3 == 0 || i % 5 == 0)
			sum_of_multiples_3_and_5_below_1024 += i;
	printf("%lu\n", sum_of_multiples_3_and_5_below_1024);

	return (0);
}
