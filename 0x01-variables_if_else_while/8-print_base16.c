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
for (hex = 0 ; hex < 10 ; hex++)
{
putchar (hex);
}
for (hex = 'a' ; hex <= 'f' ; hex++)
{
putchar (hex);
}
putchar ('\n');
return (0);
}
