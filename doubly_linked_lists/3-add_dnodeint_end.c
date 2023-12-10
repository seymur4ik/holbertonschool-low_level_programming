#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: integer to be included in new node
 * Return: address of new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node, *temp;
node = malloc(sizeof(dlistint_t));

if (node == NULL)
return (NULL);
node->n = n;

if ((*head) == NULL)
{
node->next = NULL;
node->prev = NULL;
(*head) = node;
}
else
{
temp = (*head);
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = node;
node->prev = temp;
node->next = NULL;
}
return (node);
}
