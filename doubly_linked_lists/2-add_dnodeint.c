#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add element
 * @head: pointer to head
 * @n: number
 * Return: whole list with new value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if ((*head) == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->next = *head;
		node->prev = NULL;
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
