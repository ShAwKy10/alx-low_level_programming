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
	dlistint_t *cur = *h;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (count < idx)
	{
		if (count == (idx - 1))
		{
			new->prev = cur;
		}

		if (cur)
		{
			cur = cur->next;
			count += 1;
		}
	}

	if ((count + 1) == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else
		return (NULL);

	cur->prev = new;
	cur = new->prev;
	cur->next = new;
	new->n = n;
	return (new);
}
