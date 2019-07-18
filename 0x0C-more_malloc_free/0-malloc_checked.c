#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - This function allocates memory using malloc
 * @b : integer given
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	char *p;

	p =  malloc(sizeof(char) * b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
