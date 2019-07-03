#include "holberton.h"

/**
 * puts_half - This function prints half of a string
 * followed by a newline
 * @str: The string to be evaluated
 */
void puts_half(char *str)
{
	int i = 0, n, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = 0; j < n; j++)
		{
			_putchar(str[j + n]);
		}
	}
	else
	{
		n = (i - 1) / 2;
	}
	_putchar('\n');
}

