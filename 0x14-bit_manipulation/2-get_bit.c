#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: position to get the value
 * @n: number
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	n >>= index;

	if ((n & 1) == 1)
		return (1);
	return (0);
}
