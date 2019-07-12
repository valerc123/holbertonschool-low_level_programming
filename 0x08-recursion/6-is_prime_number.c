#include "holberton.h"

/**
 * is_prime_number - Function that return if the input is prime number
 * @n: Number to be valued
 * Return: Return 1 if is prime or 0 otherwise
 */
int is_prime_number(int x)
{
   static int  cont = 2;
   static int  result = 1;

    if (x == 1 || x == 0)
    {
        cont = 2;
        result = 0;
    }

    if (cont < x)
    {
        if ((x % cont) == 0)
        {
            cont = 2;
            result = 0;
        }
        else
        {
            result = 1;
            cont++;
            is_prime_number(x);
        }
    } 
    cont = 2;
    return result;
}
