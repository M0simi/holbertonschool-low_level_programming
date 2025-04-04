#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n); /* Print the value of the current node */
count++; /* Count this node */
h = h->next; /* Move to the next node */
}

return (count); /* Return total number of nodes */
}
