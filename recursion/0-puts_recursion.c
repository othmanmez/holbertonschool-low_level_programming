#include "main.h"

/**
 * _puts_recursion - Imprime une chaîne de caractères suivie d'un saut de ligne.
 * @s: La chaîne à imprimer.
 *
 * Cette fonction utilise la récursion pour imprimer chaque caractère de la
 * chaîne, puis elle imprime un saut de ligne lorsque la chaîne est entièrement imprimée.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Condition de base : fin de la chaîne */
	{
		_putchar('\n');  /* Imprime un saut de ligne */
		return;
	}

	_putchar(*s);  /* Imprime le caractère courant */
	_puts_recursion(s + 1);  /* Appel récursif pour imprimer le reste de la chaîne */
}

