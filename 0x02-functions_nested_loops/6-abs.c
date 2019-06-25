#include "holberton.h"
/**
 * _abs - returns the absolute value of an integer
 * @n: The integer to check
 *
 * Return: an integer which is the absolute value of n
 */
int _abs(int n)
{

	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
