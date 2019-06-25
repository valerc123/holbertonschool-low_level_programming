#include "holberton.h"
/**
 * main - Prints 'HOLBERTON'
 *
 * Description: This function prints 'HOLBERTON'
 * Return: void
 */
int main(void)
{
int i;
char holberton[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
for (i = 0; i < sizeof(holberton); i++)
{
putchar(holberton[i]);
}
putchar('\n');
return (0);
}
