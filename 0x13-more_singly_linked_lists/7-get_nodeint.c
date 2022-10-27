#include "lists.h"

/**
 * get_nodeint_at_index - finds a node from a linked list listint_t
 * @head: a pointer to the head of the lisint_t
 * @index: the position of the node to locate from
 * the indices
 *
 * Return: The found node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
