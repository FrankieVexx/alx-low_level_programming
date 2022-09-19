#include "main.h"

/**
 * *_strcpy - copies the string that src point to
 * including the terminating null byte (\0)
 * to the buffer that dest points to
 * @dest: pointer to the which where the string is copied
 * @src: the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		ln++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
