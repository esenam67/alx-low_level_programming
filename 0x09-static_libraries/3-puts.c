#include "main.h"

/**
* _puts - check code
* @str: pointer
* Return: nothing
*/

void _puts(char *str)
{
int x;
x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
