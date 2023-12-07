#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer the holds the data of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint *new_node;

	new_node = malloc(sizeof(dlistint));
	if (new_node != NULL || *head != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
	}
	else
	{
		free (new_node);
		return (NULL);
	}

	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
