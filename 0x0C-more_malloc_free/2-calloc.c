#include "main.h"
#include <stdlib.h>

/*
 * Task: Function that allocates memory for an array using malloc
 * Done by: Francs Onyach
 */

/**
 * *_calloc - Allocates memory for an array using malloc
 * @nmemb: the number of items
 * @size: the size of each array element
 *
 * Return: a pointer to the allocate memory or NULL if size & nmemb equals 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *newmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	newmem = mem;

	for (i = 0, i < (size * nmemb); i++)
		newmem[i] = '\0';

	return (mem);
}
