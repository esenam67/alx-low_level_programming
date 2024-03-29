#include "main.h"

/**
 * _pow_recursion - check function
 * @x: int to raise
 * @y: power
 * Description: a function that returns the value of x
 * raised to the power of y.
 *
 * Return: the power result
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
