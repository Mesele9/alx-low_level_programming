#include "main.h"
/**
 * _pow_recursion - function that return the value of x raised to y
 * @x: the value to be mutiplied
 * @y: the power
 *
 * Return: x the power of y,-1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
