#include "holberton.h"
/**
 * root_square - fint the square root of a number
 * @n: integer to set if is the square root
 * @y: integer value to take square root of
 * Return: square root of n
 */

int root_square(int n, int y)
{
	if ((y * y) > n)
	{
		return (-1);
	}
	else if (y * y == n)
	{
		return (y);
	}
	else
	{
		return (root_square(n, y + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find squre root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
	{
		return (-1);
	}
	n = root_square(n, y + 1);
	return (n);
}
