#include <stdio.h>
/**
 * main - prints from 1 to 100 and put fizz, buzz
 * or fizzbuzz for multiples of 3, 5 and of both
 * Return: Success (0), Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ")
		/*	if (i == 100)*/
		/*		printf("Fizz");*/
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		/*	if (i == 100)*/
		/*		printf("Buzz");*/
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		/*	if (i == 100)*/
		/*		printf("FizzBuzz");*/
		}
		else
		{
			printf("%d ", i);
		/*	if (i == 100)*/
		/*		printf("%d", i);*/
		}
	}
	printf("\n");
	return (0);
}
