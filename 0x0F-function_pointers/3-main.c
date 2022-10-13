#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments given
 * @argv: An array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unsused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (agrc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(agrv[3]);

	if (get_op_func9(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get _op_func(op)(num1, num2));

	return (0);
}
