#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: a number to be checked
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_pitchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
