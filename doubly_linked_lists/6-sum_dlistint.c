#include <stdio.h>
#include "lists.h"  /* Assuming this header defines dlistint_t */

/**
 * sum_dlistint - Sums all the integers in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) in the list.
 *         If the list is empty, return 0.
 */
int sum_dlistint(const dlistint_t *h)
{
	int sum = 0;  /* Initialize sum to 0 */

	/* Traverse the list and sum the elements */
	while (h != NULL)
	{
		sum += h->n;  /* Add the data of the current node to the sum */
		h = h->next;  /* Move to the next node */
	}

	return (sum);  /* Return the total sum */
}

