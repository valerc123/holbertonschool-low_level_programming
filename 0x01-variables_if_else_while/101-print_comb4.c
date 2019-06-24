#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j;
int i;
int k;
for (j = 48; j <= 55; j++)
{
for (i = 48; i <= 56; i++)
{
for (k = 48; k <= 57; k++)
{
if (j == i || j == k || i == k || j > i
|| j > k || i > k)
{
continue;
}
else
{
putchar (j);
putchar (i);
putchar (k);
}
if (j == 55 && i == 56 && k == 57)
{
}
else
{
putchar (44);
putchar (32);
}
}
}
}
putchar('\n');
return (0);
}
