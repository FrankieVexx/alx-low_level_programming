#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters
 * @n: the number of parameters
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: The sum of all parameters or 0 if the value of n equals 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
