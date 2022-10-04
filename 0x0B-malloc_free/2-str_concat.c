#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: A pointed to new allocated memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int i, c_i = 0, len = 0;

	if (s2 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	c_str = malloc(sizeof(char) * len);

	if (c_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c_str[c_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		c_str[c_i++] = s2[i];

	return (c_str);
}
