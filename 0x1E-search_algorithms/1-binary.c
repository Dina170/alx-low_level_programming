#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of integers using the Binary search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: the number of elements in array.
  * @value: the value to search for
  *
  * Return: the first index where value is located,
  * If value is not present or if array is NULL, return -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}
	return (-1);
}
