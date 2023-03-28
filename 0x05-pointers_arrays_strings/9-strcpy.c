#include "main.h"
/**
 * *_strcpy - copies the string in src to dest
 * @*dest: where to copy the string to
 * @*src: where to copy the string from
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
