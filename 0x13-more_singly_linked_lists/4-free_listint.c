#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *clr;

	while (head)
	{
		clr = head->next;
		free(head);
		head = clr;
	}
}
