#include <stdio.h>
#include "main.h"
/**
 * leet - Encode une chaîne en "leet speak".
 * @str: Pointeur vers la chaîne à encoder.
 * 
 * Return: Pointeur vers la chaîne encodée.
 */
char *leet(char *str)
{
	char leet_chars[] = "43071"; /* Caractères leet correspondant aux lettres */
	char normal_chars[] = "aeotlAEOTL"; /* Lettres normales à remplacer */
	int i, j;

	/* Parcourt chaque caractère de la chaîne */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Compare le caractère courant avec les lettres à remplacer */
		for (j = 0; normal_chars[j] != '\0'; j++)
		{
			if (str[i] == normal_chars[j])
			{
				str[i] = leet_chars[j]; /* Remplace par le caractère leet */
				break; /* Sort de la boucle une fois remplacé */
			}
		}
	}

	return str; /* Retourne le pointeur vers la chaîne encodée */
}

