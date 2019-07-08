#include "holberton.h"

/**
 * *cap_string - This function capitalizes all the firts words of a string.
 * @n: string to be capitalize
 * Return: String in uppercase
*/
char *cap_string(char *n)
{
	int i = 0, k = 0;

	while (n[i] != '\0')
	{
		if (n[i] == ',' || n[i] == ';' || n[i] == '.'
		 || n[i] == '!' || n[i] == '?' || n[i] == '"'
		 || n[i] == '(' || n[i] == ')' || n[i] == '{'
		 || n[i] == '}' || n[i] == ' ' || n[i] == '\n'
		 || n[i] == '\t')
		{
			k = 1;
		}
		else if ((n[i] >= 'a' && n[i] <= 'z' && k == 1)
		 || (n[0] >= 'a' && n[0] <= 'z'))
		{
			n[i] -= 32;
			k = 0;
		}
		else
		{
			k = 0;
		}
		i++;
	}
	return (n);
}
