#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Integer value for the new node
 *
 * Return: Address of the new node, or NULL if it failed or invalid index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	/* Insert at the head (idx == 0) */
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	/* Traverse the list to the correct position */
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	/* If we reached the end of the list before the desired index, return NULL */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node at the correct position */
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}

