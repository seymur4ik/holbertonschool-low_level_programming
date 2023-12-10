#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: head of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (0);
	tmp = head;
	while (tmp->next != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum + tmp->n);
}
