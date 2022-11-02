#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that return the nth
 * node of a listint_t linked list
 * @head: linked list
 * @index: index of the node starting at 0
 *
 * Return: nth node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
		}
	}

	return (head);
}