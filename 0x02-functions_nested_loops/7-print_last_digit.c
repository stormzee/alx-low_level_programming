#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @c: parameter to check for
 * Return: Success (0), Always - 0 otherwise
 */
int print_last_digit(int c)
{
	int lastnum;
	lastnum = c % 10;
	_putchar(lastnum);
}
