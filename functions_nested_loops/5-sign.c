#include <stdio.h>
#include <unistd.h>

/**
 * write_char - writes a character to standard output
 * @c: the character to write
 */
void write_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *         -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write_char('+');
		return (1);
	}
	else if (n == 0)
	{
		write_char('0');
		return (0);
	}
	else
	{
		write_char('-');
		return (-1);
	}
}
