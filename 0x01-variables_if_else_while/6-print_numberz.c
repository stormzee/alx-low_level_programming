#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single numbered digits from 0 to 10
 * Return: Success (0), otherwise exit with error
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(48+a);
	putchar('\n');
	return (0);
}
