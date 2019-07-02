#include "holberton.h"

/**
 * puts2 - This function prints one char out of 2 of a string.
 * @str: The string to print
 * Return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');

}
