#include "main.h"
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 and print ERROR if the program doesn't receive
 * two arguments or return multiplication of the arguemnts
 */
int main(int argc, char *argv[])
{
	int mul, arg1, arg2;

	if (argc == 3)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);

		mul = arg1 * arg2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
