#include "main.h"

/**
 * _pow_recursion - Raises a number to a power
 * @x: the base number
 * @y: the power
 * Return: The value of the powered number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
