
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for project
 */
typedef struct list_s
{
	char *str;             /* The string stored in the node */
	struct list_s *next;   /* Pointer to the next node */
} list_t;

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Step 1: Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	/* Step 2: Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /* If strdup fails, free the new node and return NULL */
		return (NULL);
	}

	/* Step 3: Insert the new node at the beginning of the list */
	new_node->next = *head;  /* Point to the current head */
	*head = new_node;        /* Update the head to point to the new node */

	/* Step 4: Return the new node */
	return (new_node);
}

