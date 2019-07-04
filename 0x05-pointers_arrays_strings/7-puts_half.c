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
	
	n = i / 2;

	if(i % 2 == 0)
	{
		n++;

		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
