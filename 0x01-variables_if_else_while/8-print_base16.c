#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all numbers of base 16, lowercase
 * Return: Success (0), otherwise return error
 */
int main(void)
{
	int i;
	char hex_digits[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
		putchar(hex_digits[i]);
	putchar('\n');
	return (0);
}
