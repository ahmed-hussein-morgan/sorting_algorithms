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
	/*int temp;*/
	int temp, min;

	if (size == 0 || !array)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		/*min = array[i];*/
		/*min = i;*/
		for (j = 0; j < size - 1; j++)
		{
			min = array[i];
			if (array[j] <= min)
			{
				min = array[j];
			}
			temp = min;
			min = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		/*temp = min;
		min = array[i];
		array[i] = temp;
		print_array(array, size);*/
	}
}
