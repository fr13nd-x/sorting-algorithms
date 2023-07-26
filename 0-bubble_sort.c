#include "sort.h"

/**
 *bubble_sort - sorts an array in ascending
 *@array: array to be sorted
 *@size: size of array
 *Return: returns array at every swap
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int tmp;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			    print_array(array, size);
			}
		}
	}
}