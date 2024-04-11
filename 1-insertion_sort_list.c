#include "sort.h"

/**
 * swap - Swaps the integer values of two list nodes
 * @node1: Pointer to the first node
 * @node2: Pointer to the second node
 *
 * Description: This function swaps the integer values of two list nodes.
 */

void swap(listint_t *node1, listint_t *node2)
{
	int temp = node1->n;

	node1->n = node2->n;
	node2->n = temp;
}

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
			if (!current->next)
				*list = current;
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (current->prev)
				current->prev->next = current;
		}
	}
}
