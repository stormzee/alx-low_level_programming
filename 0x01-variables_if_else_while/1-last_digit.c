#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a number and 
 * check if greater than 5, equal to zero or
 * less than 6 and not 0
 * Return: Success (0), Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	if(n>5)
		printf("Last digit of %d is %d and is greater than 5\n",
			n, last_digit)
	else if(n == 0)
		printf("Last digit of %d is %d and is zero\n",
			n, last_digit)
	else if(n < 6 &&  n != 0)
		printf("Last digit of %d is %d and is less than %d\n", 
			n, last_digit)
	return (0);
}
