#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the accepted bytes of data
 * Return: the number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j noon;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		noon = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				noon = 0;
				break;
			}
		}
		if (noon == 1)
			break;
	}
	return (i);
}
