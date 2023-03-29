#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the input string to print half
 * Return: Success(0), Always
 */
void puts_half(char *str)
{
	int i, len, n;

	while (str != '\n')
	{
		len++;
		str++;
	}
	if ((len % 2) != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; i <= len; i++)
			_putchar(str[i]);
	}
	else
		for (i = (len / 2); i <= len; i++)
			_putchar(str[i]);
}
