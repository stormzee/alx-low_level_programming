#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lowercase alpha in reverse order
 * Return: Success (0), otherwise exit with error
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
