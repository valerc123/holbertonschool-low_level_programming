#include "holberton.h"
/**
 * reverse_array -  This function reverses the content of an array of integers
 * @a: an array of integers
 * @n: Number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, rev = 0;

	n--;
	for (i = 0; i < n; i++)
	{
		rev = a[n];
		a[n] = a[i];
		a[i] = rev;
		n--;
	}
}
