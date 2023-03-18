#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all alphabets in lowercase and uppercase
 * Return: Success(0), Always
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
