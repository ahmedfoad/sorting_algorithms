#include "sort.h"


/**
 * bubble_sort - This function implements the bubble
 * sort algorithm to sort an array of
 * integers in ascending order.
 *
 * Parameters:
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int holder;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				holder = array[n];
				array[n] = array[n + 1];
				array[n + 1] = holder;
				/* print array after each change or replacement. */
				print_array(array, size);
			}
		}
	}
}


