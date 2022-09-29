#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * @n: the number to use
 * Return: 1 if n number is a prime number, 0 is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: the number to evaluate
 * @i: the iterator
 *
 * Return: 1 if the number n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
