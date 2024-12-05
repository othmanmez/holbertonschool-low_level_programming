#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /* Initialize counter to 0 */

	/* Traverse the list and count the nodes */
	while (h != NULL)
	{
		count++;        /* Increment count for each node */
		h = h->next;    /* Move to the next node */
	}

	return (count); /* Return the total count */
}

