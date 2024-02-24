#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: the array of elements
 * @size: the size of array
 * Return: No return value expected
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (size == 0 || !array)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
        min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
                min = j;
				/*temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);*/
			}
            if (min != i)
            {
                temp = min;
                min = array[i];
                array[i] = temp;
            }
			/*print_array(array, size);*/
		}
		/*print_array(array, size);*/

	}
}
