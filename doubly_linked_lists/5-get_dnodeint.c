#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a specific index in a doubly
 * linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: The node at the specified index, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* Traverse the list to find the node at the specified index */
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);  /* Return the node at the specified index */
		}
		head = head->next;  /* Move to the next node */
		i++;
	}

	return (NULL);  /* Return NULL if the index is out of range */
}

