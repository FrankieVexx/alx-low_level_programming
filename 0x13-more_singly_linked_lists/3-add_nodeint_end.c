#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: a pointer to the address of the head of listint_t list
 * @n: the new number of nodes
 *
 * Return: The address of the new string of elemets.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n  = n;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
