#include "main.h"

/**
 * _sqrt - _sqrt_recursion
 * @n: integr parameter
 * @i: integer parameter
 * Return: The square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - main function
 * @n: integer n
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
