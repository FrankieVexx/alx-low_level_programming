#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * count_word - counts the number of words in a string. A healper
 * @s: the string to evaluate
 *
 * Return: mumber of words
 */

int word_len(char *str)
{
	int index = 0; len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	return (w);
}
