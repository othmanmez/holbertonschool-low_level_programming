#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * @a: Pointeur vers le tableau d'entiers.
 * @n: Le nombre d'éléments dans le tableau.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	/* Échanger les éléments du début à la fin jusqu'à atteindre le milieu*/
	while (start < end)
	{
		/* Échanger les éléments */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Se déplacer vers le milieu */
		start++;
		end--;
	}
}
