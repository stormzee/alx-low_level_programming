#include <stdio.h>
/**
 * main - 
 * @:
 *
 * Return:
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int a;
	a = 255;
	printf("a=%d\n", a);
	reset_to_98(&a);
	printf("a=%d\n", a);
	return (0);
}
