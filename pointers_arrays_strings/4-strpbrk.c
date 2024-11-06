#include "main.h"
#include <stddef.h>  /* Inclure pour NULL */
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing the bytes to match.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j; /* Counters for the loops */

	for (i = 0; s[i] != '\0'; i++) /* Traverse through each character of s */
	{
		for (j = 0; accept[j] != '\0'; j++) /* Check against each character */
		{
			if (s[i] == accept[j]) /* Match found */
			{
				return (s + i); /* Return pointer to matching byte in s */
			}
		}
	}
	return (NULL); /* Return NULL if no match is found */
}
