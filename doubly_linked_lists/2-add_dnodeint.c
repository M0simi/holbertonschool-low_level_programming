#include "lists.h"


/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: value to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* if the list is not empty, update the previous head node */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* update the head pointer to the new node */
	*head = new_node;

	return (new_node);
}
