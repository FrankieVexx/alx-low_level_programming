#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list_t list
 * @h: the linked list_t list
 *
 * Return: the number of elements in list h
 */
size_t list_len(const list_t *h)
{
	size_t elms = 0;

	while (h)
	{
		elms++;
		h = h->next;
	}

	return (elms);
}
