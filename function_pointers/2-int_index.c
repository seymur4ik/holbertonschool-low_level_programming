#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- searches for an integer
 * @array: arr
 * @size: size of arr
 * @cmp: pointer of function
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || cmp == NULL)
return (-1);
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
