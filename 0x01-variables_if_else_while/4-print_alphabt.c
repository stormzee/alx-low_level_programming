#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all alphabets except q and e.
 * Return: Success(0), Always
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
