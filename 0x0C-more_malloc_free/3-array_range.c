#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range -This function creates an array of integers
* @min: minimum number of elements of array
* @max: maximum number of elements of array
* Return: pointer
*/
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; min <= max; i++)
		{
			p[i] = min;
			min++;
		}
	}
	return (p);
}
