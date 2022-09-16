#include <stdio.h>

/**
 * main - Looks for and prints the largest prime number
 * of th number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x, i, pf;

	pf = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		pf = 2;
		x = x / 2;
	}
	for (i = 3; i <= x / 2; i = i + 2)
	{
		while (x % i == 0)
		{
			pf = 1;
			x = x / i;
		}
	}
	if (x > 2)
		pf = x;

	printf("%ld\n", pf);
	return (0);
}
