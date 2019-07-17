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
 * _strdup - function returns a pointer to a new string -
 * which is a duplicate of the string str
 * @str: sting to be copied
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i, length = 0;
	char *newArray;

	if (str == NULL)
	{
		return (0);
	}
	length = _strlen(str);
	newArray = malloc(sizeof(char) * (length + 1));
	if (newArray == NULL)
	{
		return (0);
	}
	for (i = 0; i < length; i++)
	{
		newArray[i] = str[i];
	}
	newArray[i] = '\0';
	return (newArray);
}
