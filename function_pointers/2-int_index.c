#include <stddef.h>

/**
 * int_index - Cherche un entier dans un tableau utili fonction de comparaison.
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @cmp: Pointeur vers la fonction de comparaison.
 *
 * Retourne l'index du premier élément pour lequel la fonction cmp ne retourne pas 0.
 * Si aucun élément ne correspond ou si size <= 0, retourne -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Vérifie que le tableau, la fonction de comparaison et la taille sont valides */
	if (array == NULL || cmp == NULL || size <= 0)

	{
		return -1;
	}

	/* Parcourt le tableau et applique la fonction de comparaison */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)  /* Si cmp ne retourne pas 0, on retourne l'index */
		{
			return i;
		}
	}

	/* Si aucun élément ne correspond, retourne -1 */
	return -1;
}

