#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes in listint_t list
 * @head: a pointer to the head oflistint_t list
 *
 * Return: the number of unique nodes on the list
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *fst, *lst;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	fst = head->next;
	lst = (head->next)->next;

	while (lst)
	{
		if (fst == lst)
		{
			fst = head;
			while (fst != lst)
			{
				nodes++;
				fst = fst->next;
				lst = lst->next;
			}

			fst = fst->next;
			while (fst != lst)
			{
				nodes++;
				fst = fst->next;
			}

			return (nodes);
		}

		fst = fst->next;
		lst = (lst->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: a pointer to the address of the head of listint_t list
 *
 * Return: the size of the freed list
 * Desc: the function sets header to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *clr;
	size_t nodes, index;

	nodes = looped_listint_count(*h);
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			clr = (*h)->next;
			free(*h);
			*h = clr;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			clr = (*h)->next;
			free(*h);
			*h = clr;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
