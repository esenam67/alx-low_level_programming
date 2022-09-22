#include "main.h"
/**
 *
 * Description: using main funcion
 */
void jack_bauer(void)
{
int h, j;
for (h = 0; h < 24; h++)
{
for (j = 0; j < 60; j++)
{ 
if ( h < 10)
{
_putchar('0');
_putchar(h + '0');
}
else if (h >= 10)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
}
if (j < 10)
{
_putchar(':');
_putchar('0');
_putchar(j + '0');
}
else if (j > 10)
{
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
}
}
}
