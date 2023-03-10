#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum numbers of coin to change an amount
 * @argc: numbers of argument.
 * @argv: pointer to array of passed arguments
 *
 * Return: returns 0 if argc == 2 otherwise 1.
 */
int main(int argc, char *argv[])
{
	int cents, i, coins = 0, coinsv[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			coins += cents / coinsv[i];
			cents -= (cents / coinsv[i]) * coinsv[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}

