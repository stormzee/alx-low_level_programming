#include "main.h"
/* print_alphabet_x10.c - print alphabets a-z ten times
 *
 * Return: Success(0), Always otherswise exit with error
 */
void print_alphabet_x10(void)
{
	char c = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(c);
}
