#include "holberton.h"

/**
 * print_chessboard - print chessboard from array of pieces and locations
 * @a: 2D array of pieces and locations
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
