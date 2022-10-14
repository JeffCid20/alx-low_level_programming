#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - A program that prints and indicate whether a
*	 random number is positive, negative or zero.
*
* Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("n is positive\n");

	else if (n == 0)
		printf("n is zero\n");

	else if (n < 0)
		printf("n is negative\n");
	return (0);
}
