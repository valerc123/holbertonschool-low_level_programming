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
for (n = 48; n < 58; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
else {
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
