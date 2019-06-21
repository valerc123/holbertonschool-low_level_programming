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

for (n = 48; n <= 57; n++)
{
j = n;
while(j < 57)
{
j++;
putchar(n);
putchar(j);
if ((j == 56) && (n == 57)) {
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
