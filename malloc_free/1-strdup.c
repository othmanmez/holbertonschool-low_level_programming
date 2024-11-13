#include <stdlib.h>

/**
 * _strdup - Retourne un pointeur vers un nouvel espace mémoire
 * @str: La chaîne à dupliquer.
 *
 * Return: Un pointeur vers la nouvelle chaîne
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	/* Si la chaîne d'entrée est NULL, retourner NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculer la longueur de la chaîne */
	for (len = 0; str[len] != '\0'; len++)
	{
		/* Compter les caractères jusqu'au caractère null '\0' */
	}

	/* Allouer de la mémoire pour la nouvelle chaîne*/
	dup_str = (char *)malloc((len + 1) * sizeof(char));

	/* Si l'allocation échoue, retourner NULL */
	if (dup_str == NULL)
	{
		return (NULL);
	}

	/* Copier les caractères de str dans dup_str */
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}

	/* Ajouter le caractère null à la fin de la chaîne dupliquée */
	dup_str[len] = '\0';

	/* Retourner le pointeur vers la chaîne dupliquée */
	return (dup_str);
}


