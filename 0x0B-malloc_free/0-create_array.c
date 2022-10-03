#include "main.h"

/**
 * *create_array - creates an array of chars
 * and initializes with a certain char
 * @c: the character to be created
 * @size: the size of array
 * Return: Pointer to the array of characters or NULL
 */

char *create_array(unsigned int size, char c);
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
