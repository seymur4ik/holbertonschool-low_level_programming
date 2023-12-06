#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to the list_t list to add the node to
* @str: string to initialize the new node with
* Return: if the function fails - NULL
*        otherwise - the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
node = malloc(sizeof(list_t));

if (node == NULL)
{
return (NULL);
}
node->str = strdup(str);
node->len = strlen(str);

if (*head == NULL)
{
*head = node;
node->next = NULL;
}
else
{
list_t *temp;
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = node;
node->next = NULL;
}
return (node);
}
