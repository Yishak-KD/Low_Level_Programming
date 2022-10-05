#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of integers.
  * @array: is a pointer to the first element of the array to search in
  * @size: is the number of elements in array.
  * @value: is the value to search for.
  * Return: first index where value is located, if array is NULL must return -1.
  *
  */
int jump_search(int *array, size_t size, int value)
{
	size_t m, j, s;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (m = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		m = j;
		j += s;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", m, j);

	j = j < size - 1 ? j : size - 1;
	for (; m < j && array[m] < value; m++)
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	printf("Value checked array[%ld] = [%d]\n", m, array[m]);

	return (array[m] == value ? (int)m : -1);
}
