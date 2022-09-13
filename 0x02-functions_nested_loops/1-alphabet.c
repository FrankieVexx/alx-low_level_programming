#include "main.h"

/**
 * print alphabets - prints a-z
 * Write a function that prints the alphabet in lower case
 * followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
}
