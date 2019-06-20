#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int j;
for (n = 48; n < 58; n++)
{
for (j = 48; j < 58; j++)
{
putchar(n);
putchar(j);
if (n == 57 && j == 57)
{
continue;
}
else
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
