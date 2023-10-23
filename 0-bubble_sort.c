#include "sort.h"

/**
  * bubble_sort - function that implement bubble sort
  * @array: the elements list
  * @size: the size
  * Return: return nothing
  */

void bubble_sort(int *array, size_t size)
{
	bool bol_val = false;
	size_t j, arr_len = size;

	while (bol_val == false)
	{
		bol_val = true;
		for (j = 0; j < arr_len - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap_func(array + j, array + j + 1);
				print_array(array, size);
				bol_val = false;
			}
		arr_len--;
	}
}
