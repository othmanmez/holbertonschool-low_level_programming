#include "main.h"
/**
 * _puts - Imprime une chaîne de caractères, suivie d'un saut de ligne
 * @str: Pointeur vers la chaîne de caractères à imprimer
 */
void _puts(char *str)
{
	while (*str != '\0') /* Tant que nous ne sommes pas à la fin de la chaîne */
	{
		_putchar(*str); /* Affiche le caractère actuel */
		str++; /* Passe au caractère suivant */
	}
	_putchar('\n'); /* Ajoute un saut de ligne après la chaîne */
}
