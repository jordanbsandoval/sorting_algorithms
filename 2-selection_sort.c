#include"sort.h"

/**
 * swap - swaps two integers in an array
 * @j: first number
 * @s: second number
 */
void swap(int *j, int *s)
{
	int temp = *j;

	*j = *s;
	*s = temp;
}

/**
 * selection_sort - implementing the selection sort
 * @array: the array to be sorted
 * @size:size of the array
 */
void selection_sort(int *array, size_t size)
{
	/**
	 * look for the smallest element
	 * swap the smallest element with the current
	 */
	unsigned int i = 0, j = 0, tmp_loc = 0;
	int temp;

	while (i < size)
	{
		j = i;
		temp = array[j], tmp_loc = j;
		while (j < size)
		{
			if (array[j] < temp)
				temp = array[j], tmp_loc = j;
			j++;
		}
		if (array[i] != array[tmp_loc])
		{
			swap(array + i, array + tmp_loc);
			print_array(array, size);
		}
		i++;
	}
}

