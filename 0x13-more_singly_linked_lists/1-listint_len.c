#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Give the number of elements
 * in a linked lintint_t list
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the number of elements in the list_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
