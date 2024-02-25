#include "sort.h"

#include "sort.h"

/**
 * swap - swap the elements
 * @array: the array to be sorted
 * @size: the size of array
 * @i: the first index
 * @j: the second index
*/
void swap(int *array, size_t size, int i, int j)
{
	int temp;

	temp = array[j];
	if (array[i] != array[j])
	{
		array[j] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
/**
 * find_pivot - a function that is used to find the pivot number
 * @array: the array to be sorted
 * @size: the size of array
 * @start: the first index of the array or sub-array
 * @end: the last index of the array or sub-array
 */
int find_pivot(int *array, size_t size, int start, int end)
{
	int i = start - 1, j = start;

	for (; j < end; j++)
	{
		if (array[j] < array[end])
		{
			i++;
			swap(array, size, i, j);
		}
	}
	swap(array, size, i + 1, end);
	return (i + 1);
}

/**
 * find_pivot - a function that is used to find the pivot number
 * @array: the array to be sorted
 * @size: the size of array
 * @start: the first index of the array or sub-array
 * @end: the last index of the array or sub-array
 */
void create_partition(int *array, size_t size, int start, int end)
{
	int pivot;

	if (start > end)
		return;

	pivot = find_pivot(array, size, start, end);
	create_partition(array, size, start, pivot - 1);
	create_partition(array, size, pivot + 1, end);
}


/**
 * quick_sort - Entry point
 * @array: the array of elements
 * @size: the size of array
 * Return: No return value expected
*/

void quick_sort(int *array, size_t size)
{
	if (size == 0 || !array)
	{
		return;
	}
	create_partition(array, size, 0, size - 1);
}

