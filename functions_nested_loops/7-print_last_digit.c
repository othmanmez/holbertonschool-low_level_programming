#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */

{
	int last_digit;

	/* Get the last digit using the modulus operator */
	last_digit = n % 10;

	/* Handle negative numbers */
	if (last_digit < 0)
	{
		last_digit = -last_digit; /* Make last_digit positive */
	}

	putchar(last_digit + '0'); /* Print the last digit as a character */

	return (last_digit); /* Return the last digit */
}
#include <unistd.h>
#include <stdio.h>

/**
 * write_char - writes a character to standard output
 * @c: the character to write
 */
void write_char(char c)
{
    write(1, &c, 1);
}
