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
	size_t i, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
