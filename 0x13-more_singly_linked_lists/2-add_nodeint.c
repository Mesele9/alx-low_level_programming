#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the begining
 * of a list_t list
 * @head: node to be added
 * @n: value of the node
 *
 * Return: address of a new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}
