#include "main.h"
/**
 * print_diagonal - print diagonal lines in the terminal
 * @n: the number of times to print the character
 * Return: Success (0), Always
 */
void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
		_putchar('\n');
	else if (n >= 1)
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
