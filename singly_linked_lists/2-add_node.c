#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Ajoute un nouveau nœud au début de la liste chaînée list_t.
 * @head: Pointeur vers le pointeur de tête de la liste.
 * @str: La chaîne de caractères à copier dans le nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL si l'opération échoue.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL); /* Échec de l'allocation mémoire */
	}

	/* Duplication de la chaîne str */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);  /* Libération du nœud si la duplication échoue */
		return (NULL);
	}

	/* Définir la longueur de la chaîne */
	new_node->len = strlen(new_node->str);

	/* Lier le nouveau nœud à la tête actuelle de la liste */
	new_node->next = *head;

	/* Mettre à jour la tête de la liste pour ql pointe vers le nouveau nœud */
	*head = new_node;

	return (new_node);  /* Retourne l'adresse du nouveau nœud */
}

