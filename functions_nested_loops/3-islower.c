#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	/* Check if c is in the range of lowercase letters 'a' to 'z'*/
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* Return 1 if c is lowercase*/
	}
	{
		return (0); /* Return 0 otherwise*/

	}
}
