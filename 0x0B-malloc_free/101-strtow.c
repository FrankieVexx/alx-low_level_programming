#include "main.h"
#include <stdlib.h>

/**
 * count_word - counts the number of words in a string. A healper
 * @s: the string to evaluate
 *
 * Return: mumber of words
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;

		}

	}

	return (w);
}
