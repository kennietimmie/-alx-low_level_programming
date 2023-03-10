#include "main.h"
#include <stdio.h>

/**
 * main - prints result of multiplying two numbers
 * @argc: numbers of argument.
 * @argv: pointer to array of passed arguments
 *
 * Return: returns 0 if argc must be 3 otherwise 1.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (argv[1][0] - 48) * (argv[2][0] - 48));
	return (0);
}

