#include "main.h"
/**
 * rev_string - reverses a string
 *@s: str to print half
 * Return: Success(0), Always
 */
void rev_string(char *s)
{
	int i, len, tmp;
	*p1 = s;
	*p2 = s;

	len = 0;
	while (*p2 != '\0')
	{
		len++;
		p2++;
	}
	for (i = 0; i < len / 2; i++)
	{
		/*set tmp to be the first element*/
		tmp = *(p1 + i);
		/*set the first element to be the last element using ptr*/
		*(p1 + i) = *(p2 - i - 1);
		/*set the last element to the tmp(first element*/
		*(p2 - i - 1) = tmp;
	}
}
