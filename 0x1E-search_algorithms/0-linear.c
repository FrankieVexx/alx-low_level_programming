#include "search_algos.h"

/**
* linear_search -  a functions that seraches for a specific value in an array
* @array: a pointer to the first element in the array
* @size: the size of array to be checked
* @value: The value to be searched from the array
* Return: the index of value or -1 when failed
*/

int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t ind;

		for (ind = 0; ind < size; ind++)
		{
			printf("Value checked array[%lu] = [%d]\n", ind, array[ind]);
			if (array[ind] == value)
				return (ind);
		}
		return (-1);
	}
	else
		return (-1);
}
