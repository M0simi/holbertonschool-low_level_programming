#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the pointer of the first node
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *new_str;
unsigned int len = 0;

/* Calculate the length of the string */
while (str[len])
len++;

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL) /* Check if memory allocation failed */
return (NULL);

/* Duplicate the string using strdup */
new_str = strdup(str);
if (new_str == NULL) /* Check if string duplication failed */
{
free(new_node);
return (NULL);
}

/* Assign values to the new node */
new_node->str = new_str;
new_node->len = len;
new_node->next = *head; /* Link the new node to the previous head */
*head = new_node; /* Update head to point to the new node */

return (new_node);
}
