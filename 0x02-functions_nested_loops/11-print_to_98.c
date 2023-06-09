#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print numbers from n to 98
 * @n: parameter to be used for the initial printing
 * Return: All natural numbers from n to 98
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d", n);
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d", i);
			else if (i != 98)
				printf("%d, ", i);
		}
	} else

		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d", i);
		}
	printf("\n");
}
