#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0; /* Counter to keep track of number of nodes */

while (h != NULL) /* Traverse the list until the end */
{
count++; /* Increment the counter for each node */
h = h->next; /* Move to the next node */
}

return (count);/* Return the total number of nodes */
}
