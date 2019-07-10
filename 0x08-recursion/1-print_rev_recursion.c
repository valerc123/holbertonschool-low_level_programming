#include "holberton.h"

/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if(*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		s--;
		_print_rev_recursion(*s);
	}
	_putchar(*s);
	
}
