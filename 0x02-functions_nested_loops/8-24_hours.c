#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: a function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: minute of the day
 */

void jack_bauer(void)
{
int x, y;
for (x = 0; x <= 23; x++)
{
for (y = 0; y <= 59; y++)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(':');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
_putchar('\n');
}
}
}
