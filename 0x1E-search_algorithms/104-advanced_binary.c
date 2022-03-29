#include "search_algos.h"

/**
  * advanced_binary_recursive - search recursively for value using binary search.
  * @array: points to the first element of array.
  * @left: starting array to search.
  * @right: the end of an array to search.
  * @value: value to search.
  *
  * Return: return -1 if file is not present else index where value is located.
  *
  */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Search for a value in array using binary search
  * @array: pointer to first element for searching.
  * @size: number of elements in array.
  * @value: value to search.
  *
  * Return: If no file is present or given array is NULL -1.
  *
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
