#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function to print a singly linked list
 * @h: pointer to list_t
 *
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
