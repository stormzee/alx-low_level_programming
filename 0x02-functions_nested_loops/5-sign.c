#include "main.h"
/**
 * print_sign - check whether the input parameter is alphabet
 *
 * @n: parameter to check for
 * Return: 1 if parameter is alphabet and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);
}
