#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet
 * in lowercase 10 times
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar(10);
	}
}
