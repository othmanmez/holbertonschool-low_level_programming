#include <stddef.h>  /* Pour size_t */

/**
 * array_iterator - Exécute une fonction sur chaque élément d'un tableau.
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @action: Pointeur vers la fonction à exécuter sur chaque élément.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)  /* Vérifie si letableau et l'action ne sont pas NULL */
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);  /* Applique la fonction 'action' sur chaque élément */
		}
	}
}

