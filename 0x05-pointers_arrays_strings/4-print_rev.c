#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * Return: Success(0), Always.
 */
void print_rev(char *s)
{
	int i;
	
	i = 0;
	/*get the length of s*/
	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}
