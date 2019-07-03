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
		n++;
	}
	if (n % 2 == 0)
	{
		j = n / 2;
	}
	else
	{
		j = (n + 1) / 2;
	}
	for (i = j; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
