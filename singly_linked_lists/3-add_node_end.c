#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the pointer of the first node in the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
char *new_str;
unsigned int len = 0;

/* Calculate the length of the string */
while (str[len])
len++;
/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
/* Duplicate the string */
new_str = strdup(str);
if (new_str == NULL)
{
free(new_node);
return (NULL);
}
/* Initialize the new node */
new_node->str = new_str;
new_node->len = len;
new_node->next = NULL;
/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse to the last node */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

/* Attach the new node to the end */
temp->next = new_node;

return (new_node);
}
