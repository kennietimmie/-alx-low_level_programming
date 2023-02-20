#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - Entry point
* Return: Always 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("%i is zero\n", number);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", number);
	}
	else
	{
		printf("%i is negative\n", number);
	}

	return (0);
}
