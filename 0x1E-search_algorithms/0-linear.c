#include "search_algos.h"

/**
  * linear_search - to search for a value in array
  * @array: pointer to first element for searching.
  * @size: number of elements in array.
  * @value: value to search.
  *
  * Return: If no file is present or given array is NULL -1.
  *
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
