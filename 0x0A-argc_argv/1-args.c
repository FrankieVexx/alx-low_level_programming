#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments given to the program
 * @argv: an array of pointers to the argument
 *
 * Return: 0
 */

int main(int argc, char _attribute_((_unused_)) * argv[])
{
	printf("argc = %d\n", argc - 1);

	return (0);
}
