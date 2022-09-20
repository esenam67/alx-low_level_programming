#include <stdio.h>
/**
 * main - two digit combination
 *
 * Description: using main fonction
 * this program would print comb of two digits
 * Return: 0
 */
int main()
{
int comb2, comb3;
for (comb2 = 0; comb2 < 10; comb2++)
{
for (comb3 = 0; comb3 < 10; comb3++)
{
putchar((comb2 % 10) + '0');
putchar((comb3 % 10) + '0');
if (comb2 == 9 && comb3 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
