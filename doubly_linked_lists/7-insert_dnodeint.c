#include "lists.h"

/**
 * insert_dnodeint_at_index - Insertsnewnodeat givenindex in doubly linked list
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be inserted (starting from 0)
 * @n: Value to assign to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp = *h;
unsigned int i = 0;

/* If index is 0, use the function to add at the beginning */
if (idx == 0)
return (add_dnodeint(h, n));

/* Traverse the list until the position just before the desired index */
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

/* If we reached the end or the list is too short */
if (temp == NULL || (temp->next == NULL && i + 1 != idx))
return (NULL);

/* If we want to insert at the end */
if (temp->next == NULL)
return (add_dnodeint_end(h, n));

/* Allocate memory for the new node */
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

/* Set the values for the new node */
new->n = n;
new->next = temp->next;
new->prev = temp;

/* Fix the previous and next pointers to include the new node */
temp->next->prev = new;
temp->next = new;

return (new);
}
