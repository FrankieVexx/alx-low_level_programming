#include "main.h"
#include <stdlib.h>

/*
 * Task name: 1-string_nconcat.c
 * Done by: Francis Onyach
 */

/**
 * string_nconcat - cancatenates two strings using a given number of bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of string 2 to concatenate to string 1
 *
 * Return: A pointer to the cancatenated space or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (n < len && i < (len1 + n))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
