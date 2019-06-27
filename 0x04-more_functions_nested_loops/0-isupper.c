#include "holberton.h"
/**
 * _isupper - This function checks whetever uppercase character.
 * @c: character to checked
 * Return: 1 if c is uppercase, otherwise Returns: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
