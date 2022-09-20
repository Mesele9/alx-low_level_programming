#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to be printed
 * 
 * Return: on succes 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
