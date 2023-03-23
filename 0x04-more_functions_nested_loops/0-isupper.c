#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: parameter to check for whether it is uppercase
 * Return: 1 if true, 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
