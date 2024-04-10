#include "sort.h"

/**
 * bubble_sort - Implements Bubble Sort on an array
 * @array: Array to sort
 * @size: Size of the array
 *
 * Description: Sorts an array in ascending order by repeatedly
 * swapping adjacent elements that are out of order.
 */

void bubble_sort(int *array, size_t size)
{
	size_t step;
	size_t i;

	for (step = 0; step < size - 1; ++step)
	{
		int swapped = 0;

		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
