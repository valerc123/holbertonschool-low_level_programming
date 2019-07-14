#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of things in the command line
 * @argv: array of string values
 * Return: 0 or 1 if the program does not receive two arguments
 */
int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (1);
}
