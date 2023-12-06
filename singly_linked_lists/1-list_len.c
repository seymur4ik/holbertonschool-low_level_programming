#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - returns the number of elements in a linked list_t list.
* @h: pointer to the list_t list.
* Return: number of elements in the list_t list.
*/
size_t list_len(const list_t *h)
{
size_t result = 0;
while (h != NULL)
{
result++;
h = h->next;
}
return (result);
}
