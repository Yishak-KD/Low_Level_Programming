#include "search_algos.h"

/**
  * linear_search - Search for value in array of integer
  * @array: Points to first element of the array
  * @size: The number of elements in the array.
  * @value: The value to search for
  *
  * Return: the first index where value is located or if array is NULL , function must return -1.
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
