#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - a function that return the sum of all
 * the data (n)of a listint_t
 * @head: linked list
 *
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
