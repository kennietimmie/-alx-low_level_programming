#include <stdio.h>
#include <stdlib.h>

/**
 * main - considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000, this program
 * finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t current_number = 1, prev_number = 1,
	temp, sum_of_even_numbers_of_fibonacci_less_than_4000000 = 0;

	for (; current_number < 4000000;)
	{
		if (current_number % 2 == 0)
			sum_of_even_numbers_of_fibonacci_less_than_4000000 += current_number;
		temp = current_number;
		current_number += prev_number;
		prev_number = temp;
	}
	printf("%lu\n", sum_of_even_numbers_of_fibonacci_less_than_4000000);
	return (0);
}
