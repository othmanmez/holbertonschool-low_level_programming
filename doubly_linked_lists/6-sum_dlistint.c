#include "lists.h"

/**
 * sum_dlistint -Calcule la somme de tous les éléments liste doublement chné
 * @head: Pointeur vers le début de la liste.
 *
 * Return: La somme de toutes les données de la liste (n).
 *         Si la liste est vide, retourne 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}

