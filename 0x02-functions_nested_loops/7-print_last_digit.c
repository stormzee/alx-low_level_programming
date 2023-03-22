#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @c: parameter to check for
 * Return: Success (0), Always - 0 otherwise
 */
int print_last_digit(int c)
{
	int num;

	if (c < 0)
		c = -c;

	num = c % 10;

	if (num < 0)
		num = -num;
	_putchar(num + '0');
	return (num);
}
