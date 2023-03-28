#include "main.h"
/**
 * _puts - prints a string, followed by newline
 * @str: char param to be printed
 * Return: Success(0), Always
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
