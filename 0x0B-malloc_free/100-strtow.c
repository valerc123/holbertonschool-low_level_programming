#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - This function splits a string into words.
 * @str: pointer will to be splits
 * Return: double pointer
*/
char **strtow(char *str)
{
	char **split;
	int len_str, count = 0, a = 0;

	if (str == NULL || str == '\0')
	{
		return (NULL);
	}
	for (len_str = 0; str[len_str] != '\0'; len_str++)
		;
	split = malloc(sizeof(char *) * len_str);
	if (split == NULL)
	{
		return (NULL);
	}
	for (len_str = 0; str[len_str] != '\0'; len_str++)
	{
		if (str[len_str] != ' ' || str[len_str] != '\0')
		{
			split[count][a] = '\0';
			count++;
			a = 0;
		}
		else
		{
			split[count][a] = str[len_str];
			a++;
		}		
	}

	split[count][a] = '\0';
	return (split);
}

