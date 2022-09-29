#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the given number
 * Return: The square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n * n - 1));
i}
