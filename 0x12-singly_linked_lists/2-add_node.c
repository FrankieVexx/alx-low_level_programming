#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of list_t
 * @str: the string to be added to the list_t list
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupl;
	int len;
	list_t *newn;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	dupl = strdup(str);
	if (dupl == NULL)
	{
		free(newn);
		return (NULL);
	}

	 for (len = 0; str[len];)
		 len++;

	 new->str = dupl;
	 new->len = len;
	 new->next = *head;

	 *head = new;

	 return (new);
}
