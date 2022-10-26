#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node ata the beginning of a
 * listint_t list
 * @head: a pointer to the address of the head of
 * the given listint_t list
 * @n: the number of integers the new node will contain
 *
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
