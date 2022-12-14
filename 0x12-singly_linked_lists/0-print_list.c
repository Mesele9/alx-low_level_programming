#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - afunction that prints all the elements of a list_t list
 * @h: pointer to the list_tlist to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
