#include "sort.h"

/**
 * selection_sort - Sorts an array using selection sort.
 * @array: The array to sort.
 * @size: Number of elements in the array.
 *
 * Description: Sorts the array by repeatedly finding the minimum element
 * from the unsorted part and swapping it with the first unsorted element.
 */

void selection_sort(int *array, size_t size)
{
	size_t min_index, i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_index])
				min_index = j;
	}
	if (min_index != i)
	{
		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;

		print_array(array, size);
	}
}
