#include <unistd.h>

/**
 * _putchar - writes the char c to the stdout
 * Then print out @c
 *
 * Return: On success 1.
 * on error, the return becomes -1 and errno is sect correctly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
