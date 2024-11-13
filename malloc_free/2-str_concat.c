#include <stdlib.h>  /* Pour malloc */

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La seconde chaîne.
 *
 * Description: La fonction concatène les chaînes s1 et s2. Si l'un des
 * paramètres est NULL, il est traité comme une chaîne vide. La fonction
 * retourne un pointeur vers un nouvel espace mémoire contenant la concaténation
 * des deux chaînes, terminée par un caractère NULL. Si l'allocation échoue,
 * la fonction retourne NULL.
 *
 * Return: Un pointeur vers la chaîne concaténée, ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Si s1 est NULL, on le traite comme une chaîne vide */
	if (s1 == NULL)
	{
		s1 = "";
	}

	/* Si s2 est NULL, on le traite comme une chaîne vide */
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Calculer la longueur de s1 */
	while (s1[len1] != '\0')
	{
		len1++;
	}

	/* Calculer la longueur de s2 */
	while (s2[len2] != '\0')
	{
		len2++;
	}

	/* Allouer de la mémoire pour la chaîne concaténée */
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	/* Si l'allocation échoue, retourner NULL */
	if (result == NULL)
	{
		return (NULL);
	}

	/* Copier la chaîne s1 dans result */
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	/* Copier la chaîne s2 dans result après s1 */
	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}

	/* Ajouter le caractère NULL à la fin */
	result[i + j] = '\0';

	/* Retourner le pointeur vers la chaîne concaténée */
	return (result);
}

