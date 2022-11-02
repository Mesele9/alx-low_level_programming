#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that prints all of a listint_t lists
 * @h: linked list to be printed
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (!h)
		printf("NULL");

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);

}
