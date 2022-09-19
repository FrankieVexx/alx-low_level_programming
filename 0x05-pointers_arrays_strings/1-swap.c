#include "main.h"

/**
 * swap_int - swaps the value of two integers a and b
 * @a: first integer
 * @b: first second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
