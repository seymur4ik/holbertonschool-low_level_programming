#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - calculate linked list length
 * @h: pointer to head of list
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t result = 0;
while (h != NULL)
{
h = h->next;
result++;
}
return (result);
}
