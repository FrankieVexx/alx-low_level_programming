#include "main.h"
#include <stdlib.h>

/*
 * Task: Function that allocates memory for an array using malloc
 * Done by: Francs Onyach
 */

/**
 * *_calloc - ...
 * @nmemb: the number of items
 * @size: the size of each array element
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
