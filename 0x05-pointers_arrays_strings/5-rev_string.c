#include "holberton.h"

/**
 * rev_string - This function reverses a string
 * @s: The string to reverses
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
}
