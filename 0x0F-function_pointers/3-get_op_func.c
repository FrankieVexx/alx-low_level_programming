#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op - elects the correct functiontp perform the operation
 * selected by the user
 * @s: the operator selected by the user
 *
 * Return: a pointer to the function corresponding to the
 * operatorselected
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
