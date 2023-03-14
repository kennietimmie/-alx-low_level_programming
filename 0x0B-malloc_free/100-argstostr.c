#include "main.h"
#include <stdlib.h>

/**
 * argstostr - converts program params to string
 * @ac: argument count
 * @av: argument vector.
 *
 * Return: if success pointer to string otherwise NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, it = 0;
	char *tostr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			it++;
	tostr = malloc((sizeof(char) * it) + ac + 1);
	if (tostr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, it++)
		for (j = 0; av[i][j] != '\0'; j++, it++)
			tostr[it] = av[i][j];
	it += 1;
	tostr[it] = '\0';
	return (tostr);
}

