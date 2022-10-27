#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new nodeto listint_t
 * list at a given position
 * @head: a pointer to the address of the head of listint_t
 *
 * @indx: the index of listint_t where the node should be placed
 * @n: the integer to include in the new node
 *
 * Return: the adress of the new node or NuLL if empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (indx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (indx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
