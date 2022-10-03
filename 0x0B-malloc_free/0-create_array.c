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
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(*b));
	if (b == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		b[i] = c;

	return (b);
}
