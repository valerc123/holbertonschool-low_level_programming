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
	unsigned int i, length;
	char *newArray;

	length = _strlen(str);
	if (str == '\0')
	{
		return (0);
	}
	newArray = malloc(sizeof(char) * length);
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
