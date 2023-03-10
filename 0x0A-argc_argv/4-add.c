#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of adding two numbers
 * @argc: numbers of argument.
 * @argv: pointer to array of passed arguments
 *
 * Return: returns 0 if argc > 3 otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, j;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

