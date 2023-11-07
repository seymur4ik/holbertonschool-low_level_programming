#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of arr
 * @c: char
 * Return: NULL if size = 0 else
 * pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == 0)
		return (NULL);
	for (; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
