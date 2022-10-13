#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - this function prints a name
 * @name: the name to be printed
 * @f: a pointer to the function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
