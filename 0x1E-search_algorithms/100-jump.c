#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 * If value is not present or array is NULL return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index, jmp, stp;

	if (array == NULL || size == 0)
		return (-1);

	stp = sqrt(size);
	for (index = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		index = jmp;
		jmp += stp;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; index < jmp && array[index] < value; index++)
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	return (array[index] == value ? (int)index : -1);
}
