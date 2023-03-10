#include "main.h"
#include <stdio.h>

/**
 * main - check code
 * @argc: numbers of argument passed
 * @argv: pointer to arrays of passed arguments
 *
 * Return: Always 0;
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	whatsmyname(argv[0]);
	return (0);
}

/**
 * whatsmyname - print program name
 *@s: pointer to string.

 * Return: void.
 */
void whatsmyname(char *s)
{
	printf("%s\n", s);
}

