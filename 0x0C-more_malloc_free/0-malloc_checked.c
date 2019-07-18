#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - This function allocates memory using malloc
 * @b : integer
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *) malloc(sizeof(int) * b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
