#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node to retrieve, starting from 0
 *
 * Return: Pointer to the node at the given index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;/*This variable used to count until reach the desirednode*/

while (head != NULL)
{
if (i == index)
return (head);/* If we reach the desired node, return its pointer */

head = head->next;/* Move to the next node */
i++;/* Increment the counter */
}

return (NULL);/* If we don't find the desired node, return NULL */
}
