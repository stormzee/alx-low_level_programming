#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9.
 * Return: Success (0), Always.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
