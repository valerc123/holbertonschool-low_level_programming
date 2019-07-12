#include "holberton.h"

/**
 * _puts - This function prints a string, followed by a new line
 * @str: The string to print out to stdout
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
