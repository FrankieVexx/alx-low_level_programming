#include "main.h"

/**
 * reverse_array - Reserves the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; indexx--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
