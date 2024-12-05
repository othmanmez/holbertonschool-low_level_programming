#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste_t.
 * @h: Pointeur vers la tête de la liste.
 *
 * Return: Le nombre de nœuds dans la liste.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;  /*Compteur pour le nombre de nœuds*/

	/* Parcours de la liste */
	while (h != NULL)
	{
		if (h->str == NULL)  /* Si la chaîne est NULL, on affiche (nil)*/
			printf("[0] (nil)\n");
		else  /* Sinon, on affiche la longueur et la chaîne*/
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;  /*Avance au nœud suivant*/
		count++;      /* Incrémente le compteur de nœuds*/
	}

	return (count);
}

