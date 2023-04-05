#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int current_number = 1, prev_number = 1, temp;

	for (current_number = 1; current_number < 50;)
	{
		printf("%d", current_number);

		temp = current_number;
		current_number += prev_number;
		prev_number = temp;

		printf("%s", current_number < 50 ? ", " : "");
	}
	printf("\n");
}
