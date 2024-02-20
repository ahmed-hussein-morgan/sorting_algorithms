#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array: the array of elements
 * @size: the size of array
 * Return: No return value expected
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array,size);
			}
			/*print_array(array,size);*/
			/*print_array(array,size);
			else
				{
					print_array(array, size);
					break;
				}*/
		}
		print_array(array,size);
	}
}
