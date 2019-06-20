#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if(n > 5)
{
printf("%d","and is greater than 5");
}
else(n == 0)
{
printf("and is 0");
}
if(){
printf("and is less than 6 and not 0");
}

return (0);
}
