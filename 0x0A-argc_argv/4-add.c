#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 *
 * @argc: number of things in the command line
 *
 * @argv: array of string values
 *
 * Return: 0 if no number is passed or 1 if one of the number contains
 * symbols that are not digits
 *
 */
int main(int argc, char *argv[])
{
	int result = 0, i, j;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (result);
}
