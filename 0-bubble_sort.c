#include "sort.h"

/**
 * bubble_sort - func that sorts array of ints in
 * ascending order using Bubble sort alg
 * @array: array of ints
 * @size: size of the array
 *
 * Return: returns nothing
 **/

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int tempo, swap;

	if (size < 2 || array == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		swap = 0;
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				tempo = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tempo;
				swap = 1;
				print_array(array, size);
			}
		}
		if (!swap)
			break;
	}
}
