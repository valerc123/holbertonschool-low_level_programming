#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - This function concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *str_cont;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str_cont = malloc(sizeof(char) * (j + i + 1));
	if (str_cont == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
	{
		str_cont[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		str_cont[k + l] = s2[l];
	}
	str_cont[k + l] = '\0';
	return (str_cont);
}
