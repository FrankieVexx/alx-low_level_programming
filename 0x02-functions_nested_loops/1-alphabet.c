#include <stdio.h>

/**
 * print alphabets - prints a-z
 * Write a function that prints the alphabet in lower case
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	return (0);
}
