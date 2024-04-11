#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using the
 * Insertion Sort algorithm
 * @list: Pointer to the head of the doubly linked list
 *
 * Description: Iteratively rearranges the list by inserting each
 * element into its correct position in the sorted part of the list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	for (current = (*list)->next; current; current = temp)
	{
		temp = current->next;

		while (current->prev && current->prev->n > current->n)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (!current->prev)
				*list = current;
			else
				current->prev->next = current;
		}
	}
}
