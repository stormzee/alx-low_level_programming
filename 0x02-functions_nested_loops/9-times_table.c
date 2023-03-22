#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Success (0), Always- 0 otherwise
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			_putchar(row * col + '0');
		}
		_putchar('\n');
	}
}
