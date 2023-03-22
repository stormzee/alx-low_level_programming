#include "main.h"
/**
 * jack_bauer - print every munite of the day of Jack Bauer from
 * 00:00 to 23:59
 * Return: Success (0), Always
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
		for (min = 0; min < 60; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar('\n');
		}
}
