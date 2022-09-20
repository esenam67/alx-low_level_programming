#include <stdio.h>
/**
 * main - hexadecimal
 *
 * Description: print numbers of base sixteen
 * this program print numbers
 * Return:0
 */
int main(void)
{
int hex;
char hexa;
for (hex = 0 ; hex < 10 ; hex++)
{
putchar ((hex % 10) + '0');
}
for (hexa = 'a' ; hexa <= 'f' ; hexa++)
{
putchar (hexa);
}
putchar ('\n');
return (0);
}
