#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doulby linked dlistint_t
 * @h: Pointer to the head node of the list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
