#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastdigit);
	if (lastdigit > 5)
		printf("greater than 5\n");
	else if (lastdigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not zero\n");
	return (0);
}