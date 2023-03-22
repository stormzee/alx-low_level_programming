#include "main.h"
/**
 * print_alphabet_x10 - print alphabets a-z ten times
 *
 * Return: Success(0), Always otherswise exit with error
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(c);
			c++;
		}
		/*set c=a to restart printing a-z*/
		c = 'a';
		_putchar('\n');
	}
}
