#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all node values (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0; /* We'll store the sum of the nodes here */

while (head != NULL)
{
sum += head->n;/* Add the current node's value to the total */
head = head->next;/* Move to the next node */
}

return (sum);/* Return the total sum */
}
