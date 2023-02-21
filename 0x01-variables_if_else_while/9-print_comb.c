#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
	int number = '0';

	for (; number <= '9'; number++)
	{
		putchar(number);
		if (number < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
