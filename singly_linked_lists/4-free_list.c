#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
while (head != NULL)
{
list_t *temp;
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
