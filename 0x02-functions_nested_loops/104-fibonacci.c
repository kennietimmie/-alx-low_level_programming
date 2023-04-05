#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t current_number = 1, prev_number = 1, temp;
	int i = 1;

	for (; i <= 98; i++)
	{
		printf("%lu", current_number);

		temp = current_number;
		current_number += prev_number;
		prev_number = temp;

		printf("%s", i < 98 ? ", " : "");
	}
	printf("\n");
	return (0);
}
