#include "sort.h"
/**
 * insertion_sort_list  - a function that sorts
 * a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: The list to be sorted
 *
 * Return: Always 0
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int temp_number;

	if (!list)
		return;
	tmp = *list;
	while (tmp)
	{
		while (tmp)
		{
			if (tmp->next)
			{
				if (tmp->n > tmp->next->n)
				{
					temp_number = tmp->n;
					*(int *)&tmp->n = tmp->next->n;
					*(int *)&tmp->next->n = temp_number;
					tmp = *list;
					print_list(*list);
					break;
				}
			}
			tmp = tmp->next;
		}
	}
}
