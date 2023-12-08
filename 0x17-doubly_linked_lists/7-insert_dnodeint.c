#include "lists.h"

/**
 * insert_dnodeint_at_index -  Inserts a new node at a given position.
 * @h: A pointer to the head of the list.
 * @idx: Integer holding the place of the inserted node.
 * @n: Integer holding data of the inserted node.
 *
 * Return: Returns: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	for (; idx != 1; idx--)
	{
		if (!temp)
			return (temp);

		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
