#include "main.h"

/**
 * *_strncpy - copies a string with a specified number
 * of bytes n
 * @dest: Where the string copy is stored
 * @src: The source string
 * @n: The number of bytes to be copied from src
 *
 * Return: A pointer to the resulting dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
