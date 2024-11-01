#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Pointeur vers la première chaîne.
 * @s2: Pointeur vers la seconde chaîne.
 *
 * Return: Un entier qui indique la comparaison :
 *         < 0 si s1 est moins que s2,
 *         0 si s1 est égal à s2,
 *         > 0 si s1 est plus que s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2); /* Retourne la différence des caractères*/
	}
	s1++;
	s2++;

	return (*s1 - *s2); /*Rtrn la différence si les longueurs sont différentes*/
}
