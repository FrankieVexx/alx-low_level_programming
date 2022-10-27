#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the number of unique nodes in looped
 * listint_t linked  list
 * @head: A pointer to the head of the list listint_t
 *
 * Return: the number of unique nodes in the list or 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *fst, *lst;
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
 * print_listint_safe - Prints a listint_t safely
 * @head: a pointer to the head of the listint_t list
 *
 * Return: the nuber of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
