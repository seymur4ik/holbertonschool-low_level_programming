#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer of list
 * @index: index
 * Return: elements located at this index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;

if (!head)
return (NULL);

temp = head;
while (i < index && temp != NULL)
{
temp = temp->next;
i++;
}
if (temp == NULL)
{
printf("(nil)\n");
exit(98);
}
return (temp);
}
