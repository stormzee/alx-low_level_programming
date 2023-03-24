#include "main.h"
/**
 *_isdigit - checks whether input parameter is digit
 *@c: parameter to check for whether it is digit
 *Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
