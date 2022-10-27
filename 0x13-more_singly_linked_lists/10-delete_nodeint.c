#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * on the listint_t list
 * @head: apointer to the address of the head of listint_t
 * @index: the index of the node to be deleted
 *
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *clr, copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	clr = copy->next;
	copy->next = clr->next;
	free(clr);
	return (1);
}
