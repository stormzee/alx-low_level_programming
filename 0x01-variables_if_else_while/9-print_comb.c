#include <stdio.h>
/**
 * main - prints all possible combinations of single numbers
 * Return: Success (0), Always
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= 10; j++)
		{
			putchar(i);
			putchar(',');
			putchar(j);
			putchar(' ');

		}
	}
	return (0);
}
