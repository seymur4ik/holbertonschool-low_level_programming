#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - given as a parameter on each element
 * @array: arr
 * @size: size of arr
 * @action: pointer of method
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action == NULL || array == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
