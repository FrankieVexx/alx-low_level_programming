#include "main.h"

/**
 * _strlen_recursion - Retruns the length of a string
 * @s: pointer to string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recusions(s + 1));
	}
	else
	{
		return (0);
	}
}
