#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next; /* Store next node before freeing */
free(head->str); /* Free the string (malloc'ed) */
free(head);/* Free the node itself */
head = temp; /* Move to the next node */
}
}
