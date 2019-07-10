#include "holberton.h"

/**
 * factorial -  This function returns the factorial of a given number
 * @n: integer factorial
 * Return: result factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
