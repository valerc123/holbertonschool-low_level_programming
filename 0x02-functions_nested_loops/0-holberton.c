#include "holberton.h"
/**
 * main - This function prints HOLBERTON
 * 
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 */
int main(void)
{
int i;
char holberton[9] = {'H', 'O', 'L', 'B', 'E', 'R', 'T', 'O', 'N'};
for (i = 0; i < sizeof(holberton); i++)
{
putchar(holberton[i]);
}
return (0);
}
