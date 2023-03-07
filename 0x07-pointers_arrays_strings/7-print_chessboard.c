#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: pointer to array of 8 character.
 * 
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
			_putchar('\n');
		_putchar(a[i / 8][i % 8]);
	}
	_putchar('\n');
}
