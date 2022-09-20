#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations of single-digit numbers.
 *
 * Description: using main fonction
 * this program will print combinations of single digit
 * Return
 */
int main(void);
{
int comb;
for (comb = 0; comb <= 9; comb++)
{
putchar((num % 10) + '0');
if (comb == 9)
continue;
putchar (',');
putchar ('');
}
putchar ('\n');
return (0);
}
