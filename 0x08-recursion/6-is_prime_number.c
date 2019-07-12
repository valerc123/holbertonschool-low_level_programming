#include "holberton.h"

/**
 * prime - detcts prime numbers
 * @a: integer to test if prime
 * @n: interger arument passed to function
 * Return: prime number if detected
 */

int prime(int n, int a)
{
	if (n == a)
	{
		return (1);
	}
	else if ((n % a) == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, (a + 1)));
	}
}

/**
 * is_prime_number - function returns 1 input integer is prime, otherwise 0
 * @n: integer
 * Return: 1 if prime , 0 if negative
 *
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n < 2)
	{
		return (0);
	}
	return (prime(n, a));
}
