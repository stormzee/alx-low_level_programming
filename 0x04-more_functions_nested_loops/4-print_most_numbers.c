#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9.
 * Return: Success (0), Always.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
