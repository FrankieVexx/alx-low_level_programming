#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: The first number
 * @b: the second number
 *
 * Return: the sum of numbers a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two numbers a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return the result from the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the divisionof a by b
 * @a: the first number
 * @b: the second number
 *
 * Return: the remiander of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
