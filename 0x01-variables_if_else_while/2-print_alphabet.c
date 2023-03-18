#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the alphabets
 * Return: Success (0), Always
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
