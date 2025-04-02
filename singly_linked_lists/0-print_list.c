#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

    /* Loop through the linked list */
while (h)
{
        /* Print the string and its length, handle NULL case */
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

        /* Move to the next node */
h = h->next;
count++;
}
return (count);
}
