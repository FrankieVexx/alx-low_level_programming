#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: the singly linked list
 * Return: the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t nelms;

	nelms = 0;
	while (h != NULL)
	{
		if (h->str ==  NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		nelms++;
		h = h->next;
	}
	return (nelms);
}
