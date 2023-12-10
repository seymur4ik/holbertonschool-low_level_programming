#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: head of list
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
dlistint_t *node, *cur = *head;
unsigned int i = 0;

node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = n;
if (head == NULL)
return (NULL);

if (idx == 0)
{
return (add_dnodeint(head, n));
}
while (cur)
{
if (i == (idx - 1))
{
node->next = cur->next;
if (cur->next != NULL)
{
cur->next->prev = node;
}
cur->next = node;
node->prev = cur;
return (node);
}
cur = cur->next;
i++;
}
return (NULL);
}
