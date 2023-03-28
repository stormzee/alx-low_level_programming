#include "main.h"
/**
 * puts2 - return every other character of the string
 * @str: string to return every other character
 * Return: Success (0), Always
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
