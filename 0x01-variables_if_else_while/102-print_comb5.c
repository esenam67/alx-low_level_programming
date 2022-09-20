#include <stdio.h>
/**
 * main - two digits
 *
 * Description: print code
 * this give two digit numbers
 * Return: 0
 */
int main(void)
{
int combn, combi;
for (combn = 0; combn < 99; combn++)
{
for (combi = combn + 1; combi < 100; combi++)
{
putchar((combn / 10) + '0');
putchar((combn % 10) + '0');
putchar (' ');
putchar((combi / 10) + '0');
putchar((combi % 10) + '0');
if (combn == 98 && combi == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
