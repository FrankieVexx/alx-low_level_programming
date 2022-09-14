#include "main.h"

/**
 * print alphabets - prints a-z
 * Write a function that prints the alphabet in lower case
 * followed by a new line.
 * Return: always void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);


	_putchar('\n');
}
