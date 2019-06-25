#include "holberton.h"

/**
 * times_table - This function prints the 9 times table
 * starting with 0
 */
void times_table(void)
{
	int i, j;
	int a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((j * i) > 9)
			{
				a = (i * j) / 10;
				b = (i * j) % 10;
				_putchar(a + '0');
				_putchar(b + '0');
			}
			else
			{
				_putchar((i * j) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i < 10)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
