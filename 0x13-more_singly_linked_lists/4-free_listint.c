#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a listint_t
 * @head: list to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
