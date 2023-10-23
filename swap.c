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
