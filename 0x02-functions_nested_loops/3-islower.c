#include <stdio.h>
#include "main.h"
/**
 * _is_lower - checks for lowercase alphabets
 *
 * Return: 1 if true otherwise 0
 */
int _is_lower(int c)
{
	if islower(c)
		return (1);
	else
		return (0);
}
