#include "holberton.h"

/**
 * is_prime_number -  
 */

int is_prime_number(int n)
{
	if ((n % 1 == 0) && (n % n == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
