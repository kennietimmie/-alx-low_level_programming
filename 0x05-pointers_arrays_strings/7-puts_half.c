#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print half of a string.
 * @str: String
 *
 * Return: Always: void
 */
void puts_half(char *str)
{
	int length = 0, i;

	while (str[length])
		length++;

	i = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	for (; i < length; i++)
		putchar(str[i]);

	putchar(10);
}
int main(void)
{
	puts_half("0123456789");
	return 0;
}

