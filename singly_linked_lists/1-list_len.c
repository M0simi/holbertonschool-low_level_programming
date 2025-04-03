#include "lists.h"
#include <stddef.h>

/**
 * list_len - Counts the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL) /* Traverse the list until the end */
{
count++; /* Increment count for each node */
h = h->next; /* Move to the next node */
}

return (count);
}
