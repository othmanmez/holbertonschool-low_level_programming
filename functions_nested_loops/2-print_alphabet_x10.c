#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Affiche l'alphabet en minuscules dix fois.
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
