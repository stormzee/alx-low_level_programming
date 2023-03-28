#include "main.h"
#include <stdio.h>
/**
 * print_array - print some (n) number of elements from array
 * @a: first parameter, pointer
 * @n: second parameter, number of elements to print
 * Return: Success (0), Always
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n == 1)
		printf("%d", a[0]);
	else
	{
		for (i = 0; i <= n-1; i++)
		{
			if (i == n-1)
				printf("%d", a[i]);
			else
				printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
