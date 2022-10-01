#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to createe change for an amout
 * @argc: the number of command line arguments in the program
 * @argv: the array that contains the arguments in the program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int cents, xcoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		els if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		xcoins = xcoins + 1;
	}
	printf("%d\n", xcoins);
	return (0);
}
