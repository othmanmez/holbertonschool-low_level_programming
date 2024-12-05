#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list_t list.
 * Description:
 * This function takes a pointer to the head of a list_t linked list
 * and frees all the nodes in the list along with their string content.
 * The memory allocated for each node and its string is released.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str); /* Free the string content */
		free(current);      /* Free the current node */
		current = next;
	}
}
