#include "holberton.h"
/**
 * print_diagonal - This function draws a diagonal line
 * @n: Number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, a;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{

			if (i > 0)
			{
				for (a = 0; a < i; a++)
				{
					_putchar(32);
				}
			}
				_putchar(92);
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
