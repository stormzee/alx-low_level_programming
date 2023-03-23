#include "main.h"
/**
 *_isdigit - checks whether input parameter is digit
 * @c: parameter to check for whether it is digit
 *Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c <= -1 && c >= -9))
		return (1);
	else
		return (0);
}
