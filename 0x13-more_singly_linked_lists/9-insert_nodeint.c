#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that insert a new
 * node at a given position
 * @head: linked list
 * @idx: index of the list new node should be added
 * @n: value of the new index
 *
 * Return: address of new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev = NULL;
	int ct = idx;

	if (head == NULL)
		return (NULL);

	for (ptr = *head; ct && ptr != NULL; ct--, ptr = ptr->next)
		prev = ptr;
	if (ct)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	if (prev != NULL)
	{
		ptr->next = prev->next;
		prev->next = ptr;
	}
	else
	{
		ptr->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
		ptr->n = n;
	return (ptr);
}
