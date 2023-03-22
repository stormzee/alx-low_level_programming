#include <stdio.h>
/**
 * print_to_98 - Print numbers from n to 98
 * @n: parameter to be used for the initial printing
 * Return: All natural numbers from n to 98
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		printf("%d,", i);
	printf("\n");
}
