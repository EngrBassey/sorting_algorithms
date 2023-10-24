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
  * selection_sort - function that implement selection sort
  * @array: the lists of elements
  * @size: the size of array
  */

void selection_sort(int *array, size_t size)
{
	int *low_val;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		low_val = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *low_val)
			{
				low_val = array + j;
			}
		}
		if ((array + i) != low_val)
		{
			swap_func(array + i, low_val);
			print_array(array, size);
		}
	}
}
