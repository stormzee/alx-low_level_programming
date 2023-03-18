#include <stdio.h>
/**
 * main - prints all possible combinations of single numbers
 * Return: Success (0), Always
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
		for (j = 1; j <= 10; j++)
			putchar(i + '0');
			putchar(',');
			putchar(j + '0');
			putchar(' ');
	putchar('\n');
}
