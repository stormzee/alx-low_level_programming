#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all single digit numbers of base 10 from 0
 * Return: Success (0), otherwise error
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
