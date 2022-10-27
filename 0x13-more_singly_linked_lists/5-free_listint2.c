#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: a pointer to the address of the head of the list.
 * Desc: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *clr;

	if (head == NULL)
		return;

	while (*head)
	{
		clr = (*head)->next;
		free(*head);
		*head = clr;
	}

	head = NULL;
}
