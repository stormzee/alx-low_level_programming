#include "main.h"
/**
 * name - Prints the numbers from 0 to 9.
 *Return: Success (0), Always.
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i % 10 + '0');
		i++;
	}
	_putchar('\n');
	return (0);
}
