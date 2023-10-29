#include "sort.h"

void swap_int(int *a, int *b);
/**
 * selection_sort - funct that sorts array of ints in ascending
 * order using the selection sort algorithm
 * @array: an array of integers
 * @size: size of the array
 **/

void selection_sort(int *array, size_t size)
{
	size_t j, i;
	int *temp;

	temp = NULL;
	for (j = 0; array && j < size - 1; j++)
	{
		temp = NULL;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[j])
			{
				if (temp && array[i] < *temp)
					temp = &array[i];
				if (!temp)
					temp = &array[i];
			}
		}
		if (temp)
		{
			swap_int(temp, &array[j]);
			print_array(array, size);
		}
	}
}

/**
 * swap_int - funct that swaps values of two integers
 * @a: takes an int
 * @b: takes an int
 **/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
