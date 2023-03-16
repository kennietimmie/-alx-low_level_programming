#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply to positive numbers
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always int
 */
int main(int argc, char *argv[])
{
	unsigned long a, b;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%lu\n", a * b);
	return (0);
}

