#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: the array of elements
 * @size: the size of array
 * Return: No return value expected
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size == 0 || !array)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] <= array[i])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				/*print_array(array, size);*/
			}

		}
		print_array(array, size);

	}
}
