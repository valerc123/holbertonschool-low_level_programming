#include "holberton.h"

/**
 * *leet - a function that encodes a string into 1337.
 * @n: pointer to 1st char of string to be reverse.
 * Return: char.
 */

char *leet(char *n)
{
	char s1[5] = {'A', 'E', 'O', 'T', 'L'};
	char s2[5] = {'a', 'e', 'o', 't', 'l'};
	char s3[5] = {'4', '3', '0', '7', '1'};

	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (n[i] == s1[j] || n[i] == s2[j])
			{
				n[i] = s3[j];
			}
		}
	}
	return (n);
}
