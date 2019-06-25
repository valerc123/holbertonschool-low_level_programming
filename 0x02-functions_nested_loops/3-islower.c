#include "holberton.h"

/**
 * _islower - This function checks the passed character is a lowercase letter
 * @c: The character to check
 * Return: 1 if c is lowercase, otherwise Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

