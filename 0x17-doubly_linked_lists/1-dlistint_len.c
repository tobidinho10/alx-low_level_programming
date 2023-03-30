#include "lists.h"

/**
 * dlistint_len - doubly linked lists length
 *
 * @h: pointer pointing to the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
