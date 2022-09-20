#include <stdio.h>
/**
 * main - Write a program that prints all possible comb
 *
 * Description: using main fonction
 * this program will print combinations of single digit
 * Return: 0
 */
int main(void)
{
int comb;
for (comb = 0; comb <= 9; comb++)
{
putchar((comb % 10) + '0');
if (comb == 9)
continue;
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
