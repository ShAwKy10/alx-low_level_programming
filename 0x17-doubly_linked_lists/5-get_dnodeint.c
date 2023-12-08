#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Integer holds the index number.
 *
 * Return: returns the nth node of a dlistint_t linked list
 *		or if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint *cursor = head;
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	while (counter < index)
	{
		if (cursor)
		{
			cursor = cursor->next;
			counter += 1;
		}
		else
			return (NULL);
	}

	return (cursor);
}
