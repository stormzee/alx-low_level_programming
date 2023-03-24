#include "main.h"
/**
 * more_numbers - prints numbers from 0-14
 * Return: Success (0), Always
 */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row <= 10; row++)
	{
		for (col = 0; col < 15; col++)
		{
			if (col >= 10)
				_putchar((col / 10) + 48);
			_putchar((col % 10) + 48);
		}
		_putchar('\n');
	}
}
