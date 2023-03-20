#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * main - multiply to positive numbers
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always int
 */
int main(int argc, char *argv[])
{
	unsigned long l1, l2, lout;
	int i, j;
	char * sout;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	/* exit if s1 || s2 contains non digit */
	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}

	/* exit if a || b is zero */
	if (atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);
	lout = l1 + l2;
	sout = malloc(lout + 1);
	if (sout == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%lu\n", a * b);
	return (0);
}

