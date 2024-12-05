#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"  // Inclure list.h

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	/* Allocation de mémoire pour le nouveau noeud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Duplication de la chaîne et affectation au nouveau noeud */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Initialisation du pointeur next à NULL */
	new_node->next = NULL;

	/* Si la liste est vide, le nouveau noeud devient le premier élément */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Parcours de la liste pour trouver le dernier élément */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);  /* Retour de l'adresse du nouveau noeud */
}

