#include "lists.h"

/*
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;  /* timer to store the node which we will deleteØ§ */

    while (head != NULL)  /* while there is elements in listª */
    {
        temp = head;        /* save the current node in temp */
        head = head->next;  /* move to the next node§ */
        free(temp);         /* delete the old node© */
    }
}
