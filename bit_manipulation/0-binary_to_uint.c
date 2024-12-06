#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of '0' and '1' characters.
 *
 * Return: The converted number, or 0 if there is one or more chars in
 *         the string b that is not '0' or '1', or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/* Check if the string is NULL */
	if (b == NULL)
		return (0);

	/* Traverse each character in the string */
	for (int i = 0; b[i] != '\0'; i++) {
		/* Check if the current character is '0' or '1' */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Shift result to the left (multiply by 2) and add the binary digit */
		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
