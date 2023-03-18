#include <stdio.h>
/**
 * main - prints all possible combinations of single numbers
 * Return: Success (0), Always
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	
	return (0);
}
