#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

    /* Get the last digit of n */
last_digit = n % 10;

    /* Print the result */
printf("Last digit of %d is %d ", n, last_digit);

    /* Check and print conditions */
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else if (last_digit < 6 && last_digit != 0)
{
printf("and is less than 6 and not 0\n");
}

return (0);
}

