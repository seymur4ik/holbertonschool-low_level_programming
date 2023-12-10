#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t result = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
result++;
}
return (result);
}
