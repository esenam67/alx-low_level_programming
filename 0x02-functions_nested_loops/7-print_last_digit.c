#include "main.h"
/**
 *
 * Description: using main function
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}
