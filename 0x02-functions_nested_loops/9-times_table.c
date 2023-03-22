#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Success (0), Always- 0 otherwise
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			product = row * col;
			_putchar(product + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
