#include "sort.h"


/**
  * swap_func - function that swaps 2 values
  * @a: first value
  * @b: second value
  */

void swap_func(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
  * shell_sort - function that sort array int in ascending order
  * @array: the array
  * @size: size of the array
  */

void shell_sort(int *array, size_t size)
{
	size_t gap, k, j;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (k = gap; k < size; k++)
		{
			j = k;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_func(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
