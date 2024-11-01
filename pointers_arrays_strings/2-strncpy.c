#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Une fonction qui copie une chaîne de caractères.
 * @dest: Un pointeur vers la chaîne de destination.
 * @src: Un pointeur vers la chaîne source.
 * @n: Le nombre de caractères à copier.
 *
 * Return: Retourne un pointeur vers la chaîne dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
