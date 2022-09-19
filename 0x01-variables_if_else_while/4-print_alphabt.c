#include <stdio.h>
/**
 * main - program to print alphabet except q and e
 *
 * Description: using main function
 * this program prints alphabet without q and e
 * Return: 0
 */
int main(void)
{
char chr;
for (chr = 'a'; chr <= 'z' ; chr++)
{
if (chr != 'e' && chr != 'q')
{
putchar(chr);
}
}
putchar('\n');
return (0);
}
