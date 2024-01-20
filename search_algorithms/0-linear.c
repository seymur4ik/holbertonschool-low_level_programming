#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array
 * @size: size of array
 * @value: the value to search for
 * Return: return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			printf("\n");
			return (i);
		}
		printf("\n");
	}
	return (-1);
}
