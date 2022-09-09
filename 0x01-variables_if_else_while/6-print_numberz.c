#include <stdio.h>

/**
 * main - prints all one digit numbers of base 10
 * Starts from zero and ends with anew line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
