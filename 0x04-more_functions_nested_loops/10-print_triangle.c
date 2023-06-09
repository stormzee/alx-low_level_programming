#include "main.h"
/**
 * print_triangle - print a triangle in the terminal
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	for (row = 1; row <= size; row++)
	{
		/*for loop to print a certain num of spaces on each row*/
		for (col = 1; col <= size - row; col++)
			_putchar(' ');
		for (col = 1; col <= row; col++)
			_putchar('#');
		_putchar('\n');
	}
}
