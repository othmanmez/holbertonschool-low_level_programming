#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*
 * add_node_end - Ajoute un nouveau noeud à la fin de la liste.
 * @head: Pointeur vers l'adresse du premier élément de la liste.
 * @str: Chaîne de caractères à ajouter dans le nouveau noeud.
 *
 * Description:
 * Cette fonction ajoute un nouveau noeud à la fin de la liste simplement
 * chaînée. Si la liste est vide, le nouveau noeud devient le premier
 * élément de la liste.
 *
 * Retour:
 * L'adresse du nouveau noeud si l'ajout réussit, sinon NULL si l'ajout
 * échoue (par exemple, en cas d'échec d'allocation mémoire).
 */

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
		free(new_node);  /* Libération de la mémoire en cas d'échec de strdup */
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
		temp->next = new_node;  /* Ajout du nouveau noeud à la fin */
	}

	return (new_node);  /* Retour de l'adresse du nouveau noeud */
}

