#include "main.h"
#include <stdio.h>
/**
 * print_array - print some number of elements from array
 * @a: first parameter, array pointer
 * @n: second parameter, number of elements to print
 * Return: Success (0), Always
 */
void print_array(int *a, int n)
{
	int i;

	i = 1;
	if (n != 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (a[i] != '\0')
				printf("%d, ", a[i]);
			else
				printf("%d", a[i]);
		}
	}
	else
		printf("\n");
	printf("\n");
}
