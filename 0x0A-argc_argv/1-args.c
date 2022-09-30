#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments given to the program
 * @argv: an array of pointers to the argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
