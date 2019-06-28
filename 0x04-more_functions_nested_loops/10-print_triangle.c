#include "holberton.h"

/**
 * print_triangle - This function prints a triangle
 * followed by a newline
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, s, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		j = size - 1 - i;

		for (s = j; s > 0; s--)
		{
			_putchar(' ');
		}
		for (p = size - j; p > 0; p--)
		{
			_putchar(35);
		}

		_putchar('\n');
	}
}
