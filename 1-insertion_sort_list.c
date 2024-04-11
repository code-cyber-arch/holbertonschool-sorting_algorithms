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
	if (!list || !*list || !(*list)->next)
		return;

	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *nextNode = NULL;

	while (current != NULL)
	{
		nextNode = current->next;
		if (current->prev)
			current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;

		listint_t *sortedPrev = NULL;
		listint_t *sortedCurrent = sorted;

		while (sortedCurrent != NULL && current->n > sortedCurrent->n)
		{
			sortedPrev = sortedCurrent;
			sortedCurrent = sortedCurrent->next;
		}
		if (sortedPrev != NULL)
		{
			sortedPrev->next = current;
			current->prev = sortedPrev;
		}
		else
		{
			*list = current;
			current->prev = NULL;
		}
		if (sortedCurrent != NULL)
			sortedCurrent->prev = current;
		current->next = sortedCurrent;
		if (!sortedPrev)
			sorted = current;
		current = nextNode;
	}
}

