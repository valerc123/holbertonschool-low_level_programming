#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: base integer
 * @y: power integer
 * Return: x^y or 0 if `y' is negtive
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
