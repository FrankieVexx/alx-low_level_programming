#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using bns
 * @array: a pointer to the first element of the array to be searched
 * @size: the number of elements in array ro search from
 * @value:  the value to search for
 * Return:  the index where the value is located
 * if value is not present or array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		size_t ind, mid;

		printf("Searching in array:");
		for (ind = left; ind < right; ind++)
			printf(" %d,", array[ind]);
		printf(" %d\n", array[right]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
