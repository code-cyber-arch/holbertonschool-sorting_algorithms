#include "sort.h"

/**
 * swap - Swaps two elements and prints the array.
 * @array: Array of integers.
 * @index1: Index of the first element.
 * @index2: Index of the second element.
 * @size: Number of elements in the array.
 *
 * Description: Exchanges the elements at specified indices and
 * prints the modified array.
 */

void swap(int *array, int index1, int index2, size_t size)
{
	int temp = array[index1];

	array[index1] = array[index2];
	array[index2] = temp;
	print_array(array, size);
}

/**
 * partition - Reorders elements around a pivot for quicksort.
 * @array: Array of integers.
 * @left: Start index for partitioning.
 * @right: End index with pivot element.
 * @size: Total array size for printing.
 *
 * Description: Arranges elements less than the pivot to the left,
 * greater to the right, and returns the new pivot index.
 * Uses 'swap' to rearrange elements.
 *
 * Return: New index of the pivot.
 */

int partition(int *array, int left, int right, size_t size)
{
	int i = left - 1;
	int j;

	for (j = left; j < right; j++)
	{
		if (array[j] < array[right])
		{
			i++;
			if (i != j)
				swap(array, i, j, size);
		}
	}
	if (array[right] < array[i + 1])
		swap(array, i + 1, right, size);
	return (i + 1);
}

/**
 * quick_recursion - Recursively sorts an array using quicksort.
 * @array: Array to sort.
 * @left: Starting index of the segment.
 * @right: Ending index of the segment.
 * @size: Total size of the array for printing purposes.
 *
 * Description: Recursively sorts elements by partitioning around a pivot
 * obtained from the `partition` function and then sorting the subarrays
 * on either side of the pivot.
 */

void quick_recursion(int *array, int left, int right, size_t size)
{
	int piv;

	if (left < right)
	{
		piv = partition(array, left, right, size);
		quick_recursion(array, left, piv - 1, size);
		quick_recursion(array, piv + 1, right, size);
	}
}

/**
 * quick_sort - Sorts an array using quicksort.
 * @array: Array to sort.
 * @size: Number of elements in the array.
 *
 * Description: Sorts the array using the quicksort algorithm.
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_recursion(array, 0, (int)size - 1, size);
}
