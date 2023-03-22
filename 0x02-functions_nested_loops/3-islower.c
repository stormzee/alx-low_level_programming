#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lowercase alphabets
 * @c - argument to check whether it is lowercase
 * Return: 1 if true otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
