#include "main.h"
/**
 * _strlen - get the length if a string
 * @*s: pointer to the character s.
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
