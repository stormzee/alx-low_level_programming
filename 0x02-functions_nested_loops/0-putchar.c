#include <stdio.h>
/**
 * main - Print '_putchar' followed by a newline
 * Return: Success (0), Awalys otherwise exit with error
 */
int main(void)
{
	int c;
	char ptchar[] = "_putchar";
	for (c = 0; c <= 8; c++)
		putchar(ptchar[c]);
	putchar('\n');
	return (0);
}
