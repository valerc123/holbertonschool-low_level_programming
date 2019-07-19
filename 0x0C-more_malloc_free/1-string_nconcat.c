#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 * @s: Variable that contains a character array to be counted
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int  n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
/**
 * string_nconcat - This function concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes given
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, k, l;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	concat = malloc(sizeof(char) * (n + len_s1 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			concat[k] = s1[k];
		}
		for (l = 0; l < n; l++)
		{
			concat[k + l] = s2[l];
		}
	}
	concat[k + l] = '\0';
	return (concat);
}
