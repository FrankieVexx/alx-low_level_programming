#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: the number of arguments in the program
 * @argv: the nummber of arrays of string the argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
