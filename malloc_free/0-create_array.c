#include <stdlib.h>  /* Pour malloc */

/**
 * create_array - Crée un tableau de caractères et
 * l'initialise avec un caractère spécifique.
 * @taille: La taille du tableau à créer.
 * @c: Le caractère utilisé pour initialiser chaque élément du tableau.
 *
 * Retourne: Un pointeur vers le tableau nouvellement créé,
 * ou NULL si la taille est 0
 *          ou si l'allocation échoue.
 */
char *create_array(unsigned int taille, char c)
{
	char *tableau;
	unsigned int i;

	/* Si la taille est 0, retourner NULL */
	if (taille == 0)
	{
		return (NULL);
	}

	/* Allouer de la mémoire pour le tableau */
	tableau = (char *)malloc(taille * sizeof(char));

	/* Si l'allocation échoue, retourner NULL */
	if (tableau == NULL)
	{
		return (NULL);
	}

	/* Initialiser le tableau avec le caractère spécifié */
	for (i = 0; i < taille; i++)
	{
		tableau[i] = c;
	}

	/* Retourner le pointeur vers le tableau créé */
	return (tableau);
}
