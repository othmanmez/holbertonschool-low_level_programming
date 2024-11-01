#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatène deux chaînes de caractères.
 * @dest: Pointeur vers la chaîne de destination.
 * @src: Pointeur vers la chaîne source à concaténer.
 *
 * Cette fonction appende la chaîne src à la chaîne dest,
 * en écrasant le caractère nul de dest à la fin et en ajoutant
 * un nouveau caractère nul à la fin de la chaîne concaténée.
 *
 * Return: Pointeur vers la chaîne de destination (dest).
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	{
		while (dest[i] != '\0')
			i++;
	}
	{
		while (src[j] != '\0')

			dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}

