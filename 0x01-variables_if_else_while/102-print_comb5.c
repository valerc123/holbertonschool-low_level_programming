#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j, q, k, i;
for (j = 48; j <= 57; j++)
{
for (q = 48; q <= 56; q++)
{
for (k = 48; k <= 57; k++)
{
for (i = 48; i <= 57; i++)
{
if (((j < k) || (q < i)) && (((j * 10) + q) < ((k * 10) + i)))
{
putchar (j);
putchar (q);
putchar (32);
putchar (k);
putchar (i);
}
else
{
continue;
}
if (j == 57 && q == 56 && k == 57 && i == 57)
{
continue;
}
else
{
putchar (44);
putchar (32);
}
}
}
}
}
putchar('\n');
return (0);
}
