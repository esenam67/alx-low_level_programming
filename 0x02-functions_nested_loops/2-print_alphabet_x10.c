#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int x;
int k;
for (k = 0; k < 10;  k++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar (x);
}

_putchar ('\n');
}
}
