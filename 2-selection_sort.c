#include "sort.h"

/**
 * selection_sort - sorts integer array in ascending order
 * using selection sort algorithm.
 * @array: pointer to array intended to be sorted
 * @size: array's size
 *
 * Return: current state of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	/* Validate if list pointer is not null & size is less than 2 */
	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* Assume current element is the minimum value */
		min_idx = i;

		/* Search for minimum element in unsorted array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/* Swap found minimum element with first unsorted element */
		if (min_idx != i)
		{
			int temp = array[i];

			array[i] = array[min_idx];

			array[min_idx] = temp;

			/* Display array's current state */
			print_array(array, size);
		}
	}
}