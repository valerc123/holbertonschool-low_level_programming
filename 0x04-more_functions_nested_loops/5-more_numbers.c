#include "holberton.h"
/**
 * more_numbers - This function prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			a = j;
			if (j > 9)
			{
				a = j / 10;
				b = j % 10;
			}
				_putchar(a + '0');
			if (j > 9)
			{
				_putchar(b + '0');
			}
		}

		_putchar('\n');
	}
}
