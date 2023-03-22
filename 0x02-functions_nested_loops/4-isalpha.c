#include "main.h"
/**
 * _isalpha - check whether the input parameter is alphabet
 *
 * @c: parameter to check for
 * Return: 1 if parameter is alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
