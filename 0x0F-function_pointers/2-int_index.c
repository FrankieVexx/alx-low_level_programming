#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare the values
 * Return: the index of the first element when cmp does bot return 0
 * -1 if size <= 0 or if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
