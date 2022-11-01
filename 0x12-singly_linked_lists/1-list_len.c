#include "lists.h"
/**
 * list_len - function that return the number of
 * elements in a linked list list_t list
 * @h: a pointer to list_t list
 *
 * Return: number of elemet in a list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);

}
