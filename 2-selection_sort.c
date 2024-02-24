#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: the array of elements
 * @size: the size of array
 * Return: No return value expected
*/

void selection_sort(int *array, size_t size)
{
	size_t i, min_num, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		min_num = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_num])
				min_num = j;
		}
		if (min_num != i)
		{
			temp = array[i];
			array[i] = array[min_num];
			array[min_num] = temp;
			print_array(array, size);
		}
	}
}
