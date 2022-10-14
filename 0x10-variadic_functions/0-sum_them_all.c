#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters
 * @n: the number of parameters
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end (ap);
	return (sum);
}
