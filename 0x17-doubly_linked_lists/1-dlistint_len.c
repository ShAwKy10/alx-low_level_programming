#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: A pointer of the head of the dlistint_t list.
 *
 * Return: The number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}

	return (count);
}
