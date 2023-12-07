#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer the holds the data of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *cursor = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	else if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (!cursor)
		cursor = cursor->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = cursor;

	cursor->next = new_node;

	return (new_node);
}
