#include "main.h"
#include <stdio.h>
/**
 * main - Affiche l'alphabet en minuscules dix fois.
 *
 * Return: Toujours 0.
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
