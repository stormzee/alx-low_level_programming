#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a number based on the conditions.
 * if number is greater than 0, positive
 * if number is less than 0, negative
 * 0 if number is equal to zero
 * Return: Success (0), Always.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
