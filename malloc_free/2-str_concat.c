#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i = 0, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	arr = malloc(((size1 + size2) * sizeof(char)) + 1);
	if (arr == 0)
		return (NULL);
	for (; i < size1; i++)
		arr[i] = s1[i];
	for (i = 0; i < size2; i++)
		arr[size1 + i] = s2[i];
	arr[size1 + size2] = '\0';
	return (arr);
}
