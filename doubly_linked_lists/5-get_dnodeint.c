#include"lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (head)
	{
		if (position == index)
			return head;

		head = head->next;
		position++;
	}

	return NULL;
}
