#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 * Return: Success (0), Always else exit with error
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
