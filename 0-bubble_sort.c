#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm
 * Description: cccccccccccccc
 *
 * @array: Integer stored in the node
 * @size: Pointer to the previous element of the list
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, swapped;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (swapped != 1)
			break;
	}
}
