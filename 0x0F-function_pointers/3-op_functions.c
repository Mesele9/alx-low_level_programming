#include "3-calc.h"

/**
 * op_add - add a and b
 * @a: first number
 * @b: second number
 *
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a and b
 * @a: first number
 * @b: second number
 *
 * Return: difference of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mutiply a and b
 * @a: first num
 * @b: second num
 *
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a and b
 * @a: first num
 * @b: second num
 *
 * Return: division of a & b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulose of a & b
 * @a: first num
 * @b: second num
 *
 * Return: remainder of division of a & b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
