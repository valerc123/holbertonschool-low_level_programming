#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, pow = 0;
	unsigned int num = 0;

	if (!b)
		return (0);
	pow = 1;

	while (b[i + 1] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		num += (b[i] - '0') * pow;
		pow *= 2;
		i--;
	}
	return (num);
}
