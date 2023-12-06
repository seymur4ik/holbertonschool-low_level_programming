#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list to add the node to
 * @str: string to initialize the new node with
 * Return: if the function fails - NULL
 *        otherwise - the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
node = malloc(sizeof(list_t));
if (node == NULL)
{
return (NULL);
}
node->str = strdup(str);
node->len = strlen(str);
node->next = *head;
*head = node;
return (node);
}
