#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **arg;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arg = malloc(sizeof(int *) * height);
	if (arg == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arg[i] = malloc(sizeof(int) * width);
		if (arg[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(arg[i]);
			}
		free(arg);
		return (NULL);
		}
		for (j = 0; j <= i; j++)
		{
			arg[i][j] = 0;
		}
	}
	return (arg);
}
