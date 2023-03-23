#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - get function
 * @s: op type.
 *
 * Return: Always int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].op) == *s && strlen(s) == 1)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
