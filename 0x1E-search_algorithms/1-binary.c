#include "search_algos.h"

/**
  * @array: is a pointer to the first element of the array to search in
  * @size: is the number of elements in array
  * @value: the value to search for
  *
  * Return:array will return -1 if it is NULL
  *
  */
int linear_search(int *array, size_t size, int value)
{
	size_t m;

	if (array == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[m]);
		if (array[m] == value)
			return (m);
	}

	return (-1);
}
