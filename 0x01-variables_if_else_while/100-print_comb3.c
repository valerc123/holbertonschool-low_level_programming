#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j;
int i;
for (j = 48; j <= 56; j++)
{
for (i = 48; i <= 57; i++)
{
if (j == i || j > i)
{
continue;
}
else
{
putchar (j);
putchar (i);
}
if (j == 56 && i == 57)
{
}
else
{
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
