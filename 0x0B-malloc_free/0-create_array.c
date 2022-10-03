#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes with a certain char
 * @c: the character to be created
 * @size: the size of array
 * Return: Pointer to the array of characters or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;


	return (array);
}
