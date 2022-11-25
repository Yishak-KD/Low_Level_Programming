#include "search_algos.h"

/**
  * linear_search - search for a value in an array.
  * @array: a pointer to the first element of the array.
  * @size: a number of elements in array.
  * @value: value to search for.
  *
  * Return: If value is not present in array or if array is NULL, your function must return -1, 
  * otherwise the function must return the first index where value is located.
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
