#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)/* If the list is empty */
		return (-1);

	/* If we want to delete the head node */
	if (index == 0)
	{
		*head = temp->next;/* Move head pointer to the next node */
		if (*head != NULL)
			(*head)->prev = NULL;/* Set new head's prev to NULL */
		free(temp);/* Free old head */
		return (1);
	}

	/* Traverse to the node just before the one to delete */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)/* Index out of range */
		return (-1);

	/* Reconnect previous and next nodes */
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);/* Free the node */
	return (1);
}
