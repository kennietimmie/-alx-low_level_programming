#include <stdio.h>
/**
 * main - A program that prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 48, b, c, d;
	
	for (; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 49; d <= 57; d++)
				{
					if (a + b < c + d)
					{
						putchar(a);
						putchar(b);
						
						putchar(' ');
						
						putchar(c);
						putchar(d);
						
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
