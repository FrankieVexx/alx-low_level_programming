#include "main.h"

/**
 * *cap_string - capitalizes all the words in a string
 * @str: the string to be modified
 *
 * Return: A pointer to the string changed
 */
char *cap_string(char *s)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||

