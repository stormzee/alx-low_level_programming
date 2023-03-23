#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times character _ should be printed
 * Return: Success(0), Always
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else if (n >= 1)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
