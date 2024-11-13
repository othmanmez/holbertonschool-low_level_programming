#include <stdlib.h>
/**
 * free_grid - Libèe la mémoire allouée pour une gri
 * @grid: pointeur vers la grille 2D
 * @height: nombre de lignes de la grille
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
