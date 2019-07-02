#include "holberton.h"

/**
 * print_rev - This function prints a string in reverse, followed by a new line
 * @s: The string to print out to stdout
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (j <= i)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
