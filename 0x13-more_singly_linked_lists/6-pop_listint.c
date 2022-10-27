#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: the pointer to the address of the head of listint_t list
 * Return: the data of the heads node or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *clr;
	int finl;

	if (*head == NULL)
		return (0);

	clr = *head;
	finl = (*head)->n;
	*head = (*head)->next;

	free(clr);

	return (finl);
}
