#include "main.h"
#include <stdio.h>

/**
 * main - get numbers of passed arguments
 * @argc: numbers of argument.
 * @argv: pointer to array of passed arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

