#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer to the swap_int function
 * @b: second integer
 * Return: Success(0), Always
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
