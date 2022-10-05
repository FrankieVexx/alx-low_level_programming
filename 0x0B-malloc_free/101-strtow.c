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
	int i = 0; len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}


/**
 * count_words - counts the number of words in a string
 * @str: the string to be searched
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}

	return (words);
}

/**
 * strtow - splits a string into two words
 * @str: the string to split
 *
 * Return: A pointer an array off words or NULL
 */

char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char*) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strongs[w]);

			free (strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[i];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
