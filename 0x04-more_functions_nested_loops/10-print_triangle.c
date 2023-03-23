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
		/*create another inner for loop to print a certain num of spaces*/
		for (row = 1; row <= size - 1; row++)
			_putchar(' ');
		for (col = 1; col <= row; col++)
			_putchar('#');
		_putchar('\n');
	}
}
