#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer from which to extract the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Get the absolute value of the last digit */
	last_digit = n % 10;
		if (last_digit < 0)
			last_digit *= -1;
			/* Print the last digit */
				_putchar('0' + last_digit);
					return (last_digit);
}
