#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of things in the command line
 *
 * @argv: array of string values
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
