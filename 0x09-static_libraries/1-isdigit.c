#include "holberton.h"

/**
 * _isdigit - This function checks digit from 0 to 9
 * @c: The integer to check
 * Return: 1 if c is a digit, otherwise Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
