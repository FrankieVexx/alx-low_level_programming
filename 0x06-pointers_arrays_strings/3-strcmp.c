#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The secong string
 * Return: 1 if true, 0 otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
