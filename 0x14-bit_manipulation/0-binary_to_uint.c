#include "main.h"

/**
 * binary_to_uint - check function
 * @b: is pointing to a string of 0 and 1 chars
 * Description: a function that converts a binary number to an
 * unsigned int.
 *
 * Return: the converted number y
 */

unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int y = 0;
if (!b)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
y = 2 * y + (b[x] - '0');
}
return (y);
}
