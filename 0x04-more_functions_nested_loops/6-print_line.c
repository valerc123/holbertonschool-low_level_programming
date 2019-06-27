#include "holberton.h"

/**
 * print_line - This function draws a straight line n times.
 * @n:  is the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
