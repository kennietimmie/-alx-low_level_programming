#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*callable)(int, int);
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	callable = get_op_func(op);
	if (callable == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(op) == '%' || *(op) == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", callable(a, b));
	return (0);
}
