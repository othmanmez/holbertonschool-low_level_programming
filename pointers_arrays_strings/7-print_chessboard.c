#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Affiche l'échiquier.
 * @a: Le tableau 2D représentant l'échiquier (8x8).
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)  /* Parcours des lignes */
	{
		for (j = 0; j < 8; j++)  /* Parcours des colonnes */
		{
			putchar(a[i][j]);  /* Affiche chaque caractère */
		}
		putchar('\n');  /* Affiche un saut de ligne après chaque ligne */
	}
}

