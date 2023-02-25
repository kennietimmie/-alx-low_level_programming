#include <stdio.h>
/**
 * main - A program that prints all possible different combinations
 * of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int first = 48, second, third;

	for (; first <= 57; first++)
	{
		for (second = 49; second <= 57; second++)
		{
			for (third = 50; third <= 57; third++)
			{
				if (first < second && second < third)
				{
					putchar(first);
					putchar(second);
					putchar(third);

					if (first < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
