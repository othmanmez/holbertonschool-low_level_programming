#include "main.h"
#include <stddef.h>  /* Inclure pour NULL */

/**
 * _strchr - Localiser un caractère dans une chaîne
 * @s: Pointeur vers la chaîne à parcourir
 * @c: Caractère à localiser dans la chaîne
 *
 * Cette fonction retourne un pointeur vers la première
 * occurrence du caractère
 * `c` dans la chaîne `s`. Si le caractère n'est pas trouvé,
 * elle retourne NULL.
 *
 * Retour : Pointeur vers la première occurrence de `c` dans `s`,
 * ou NULL si non trouvé.
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)  /* Vérifie si la chaîne est NULL */
	{
		return (NULL);  /* Retourne NULL si la chaîne est NULL */
	}

	while (*s)  /* Parcourt la chaîne jusqu'au caractère nul ('\0') */
	{
		if (*s == c)  /* Vérifie si le caractère actuel correspond à `c` */
		{
			return (s);  /* Retourne un pointeur vers le caractère trouvé */
		}
		s++;  /* Passe au caractère suivant */
	}

	/* Vérifie si le caractère recherché est le caractère nul '\0' */
	if (*s == c)  /* Si `c` est '\0' */
	{
		return (s);  /* Retourne un pointeur vers le caractère nul */
	}

	return (NULL);
}
