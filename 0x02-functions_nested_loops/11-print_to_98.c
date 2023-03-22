#include <stdio.h>
/**
 * print_to_98 - Print numbers from n to 98
 * @n: parameter to be used for the initial printing
 * Return: All natural numbers from n to 98
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		putchar(n + '0');
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			putchar(i + '0');
			putchar(',');
		}
	}
	for (i = n; i <= 98; i++)
	{
		putchar(i + '0');
		putchar(',');
	}
	printf("\n");
}
