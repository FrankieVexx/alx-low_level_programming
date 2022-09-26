#include "main.h"

/**
 * _memset - fills memoryof b with constant bytes n
 * from a memory pointed to by s.
 * @s: the memory area to be filled
 * @b: the char used to fill the memory area
 * @n: the number of bytes to be filled in the address of s
 *
 * Return: A pointer to the filled area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*for (index = 0; index < n; index++)
		memory[index] = value;*/
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
