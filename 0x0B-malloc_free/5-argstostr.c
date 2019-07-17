#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - This function concatenates all the arguments
 * @ac: number of arguments
 * @av: array of strings of the arguments
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *aux, *string;
	int a, b, i, j, count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	count += 1;
	aux = malloc(sizeof(char) * count);
	if (aux == NULL)
	{
		return (NULL);
	}
	string = aux;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			*aux = av[a][b];
			aux++;
		}
		*aux = '\n';
		aux++;
	}
	return (string);
}
