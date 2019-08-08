#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int base = 2, i = 0;
	unsigned int res = 0;
	int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			num = 1;
		else
			num = 0;
		res = res * base + num;
	}
	return (res);
}
