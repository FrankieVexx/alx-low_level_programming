#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: a pointer to the head of a listint_t list
 * Return: the address of the node where the loop begins or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fst, *lst;

	if (head == NULL || head->next == NULL)
		return (NULL);

	fst = head->next;
	lst = (head->next)->next;

	while (lst)
	{
		if (fst == lst)
		{
			fst = head;

			while (fst != lst)
			{
				fst = fst->next;
				lst = lst->next;
			}

			return (fst);
		}

		fst = fst->next;
		lst = (lst->next)->next;
	}

	return (NULL);
}
