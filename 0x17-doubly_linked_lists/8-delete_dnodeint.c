#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index
 *				of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: Integer holds the place of the node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *copy = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = copy->next;
		if (copy->next == NULL)
			return (-1);

		copy->next->prev = NULL;
		free(copy);
		return (1);
	}

	while (count < index)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
		count++;
	}
	copy->prev->next = copy->next;
	if (copy->next)
		copy->next->prev = copy->prev;

	if (copy->next == NULL)
	{
		temp = copy->prev;
		temp->next = NULL;
		free(copy);
		return (1);
	}
	free(copy);
	return (1);
}
