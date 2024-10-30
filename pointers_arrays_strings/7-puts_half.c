#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	/* Trouver la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}
	/* Déterminer le point de départ pour imprimer la deuxième moitié */
	if (len % 2 == 0)
	{
		start = len / 2;  /* Longueur paire */
	}
	else
	{
		start = (len - 1) / 2;  /* Longueur impaire */
		start++;  /* Démarrer après le milieu */
	}
	/* Imprimer la seconde moitié de la chaîne */
	for (; start < len; start++)
	{
		_putchar(str[start]);
	}
	_putchar('\n');  /* Nouvelle ligne à la fin */
}
