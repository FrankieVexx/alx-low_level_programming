#include "main.h"
#include <stdlib.h>

/**
 * char *_strdup - returns a pointer to a newly allocated space
 * the pointer contains a copy of given string
 * @str: the string to copy
 *
 * Return: NULL if str == NUll or no memory is available
 */
char *_strdup(char *str)
{
	char *d;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	d = malloc(sizeof(char) * (len + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[len] = '\0';

	return (d);
}
