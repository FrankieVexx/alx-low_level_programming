#include "main.h"

/**
 * *_strncat - concatenates two strings using atmost
 * n number of bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be taken from src and appended to dest
 *
 * Return: A pointer the resulting sttring dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
