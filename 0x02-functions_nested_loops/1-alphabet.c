#include "main.h"

/**
 *print_alphabet: a function that prints the alphabet in lower case
 *
 * Return: no return
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
