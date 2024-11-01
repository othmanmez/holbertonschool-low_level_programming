#include <stdio.h>

/**
 * string_toupper - Change toutes les lettres minisc d'une chaîne en majus.
 * @str: Pointeur vers la chaîne à convertir.
 *
 * Return: Pointeur vers la chaîne convertie.
 */
char *string_toupper(char *str)
{
	char *original = str; /* Stocke le pointeur original pour le retour */

	while (*str)
	{
		/* Vérifie si le caractère est une lettre minuscule */
		if (*str >= 'a' && *str <= 'z')
		{
			/* Convertit en majuscule en soustrayant 32 de la valeur ASCII */
			*str -= 32;
		}
		str++; /* Passe au caractère suivant */
	}

	return (original); /* Retourne le poin*/
}
