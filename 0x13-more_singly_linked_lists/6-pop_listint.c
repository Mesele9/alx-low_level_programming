#include "lists.h"
#include <stdlib.h>
/**
 * pop_list - a function that deletes the head node of a listint_t linked list
 * @head: linked list
 *
 * Return: the head nodes data(n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int nodedata;

	listint_t *temp;

	if (*head == NULL)
		return (0);
	nodedata = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (nodedata);
}
