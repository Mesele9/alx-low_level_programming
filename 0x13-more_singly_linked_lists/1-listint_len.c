#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * ina linked list list_t
 * @h: linked list to be checked
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (!h)
		return (0);

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
