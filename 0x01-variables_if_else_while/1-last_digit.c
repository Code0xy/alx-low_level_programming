#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -  assign a random number to the variable n each time it is executed
*print the last digit of the number stored in the variable n
*Return: Always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of 98 is 8 and is greater than 5");
}
if (n == 0)
{
printf("Last digit of 980 is 0 and is 0");
}
if (n < 6 && n != 0)
{
printf("Last digit of -98 is -8 and is less than 6 not 0");
}
printf("\n");
return (0);
}
