#include "main.h"
/**
 *print_numbers - Prints the numbers from 0 to 9.
 *Return: Success (0), Always.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c % 10 + '0');
	}
	_putchar('\n');
}
