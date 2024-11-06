#include "main.h"
#include <stdio.h>

/**
 * _strncat - Une fonction qui concatène deux chaînes de caractères.
 * @dest: Un pointeur vers la chaîne de destination.
 * @src: Un pointeur vers la chaîne source.
 * @n: Le nombre de caractères à ajouter à la chaîne dest à partir de src.
 *
 * Return: Retourne un pointeur vers la chaîne dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Trouver la fin de la chaîne dest*/
	for (i = 0; dest[i] != '\0'; i++)
		;

	/*Ajouter jusqu'à n caractères de src à dest*/
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
		dest[i] = src[j];

	/* Ajouter le caractère nul à la fin de la chaîne concaténée*/
	dest[i] = '\0';

	return (dest); /* Retourner le pointeur vers la chaîne dest*/
}

