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
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/* print array after each change or replacement. */
				print_array(array, size);
			}
		}
	}
}

