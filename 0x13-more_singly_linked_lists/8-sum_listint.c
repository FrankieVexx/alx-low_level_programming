#include "lists.h"

/**
 * sum_listint - calculates the sum of the data in listint_t list
 * @head: pointer to the head of listint_t
 *
 * Return: the sum of all data in listint_t or 0 if empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
