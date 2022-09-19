#include <stdio.h>
/**
 * main - reverse number
 *
 * Description: the number in reverse
 * the program prints reverse
 * Return: 0
 */
int main(void)
{
char rev;
for (rev = 'z' ; rev >= 'a' ; rev--)
{
putchar(rev);
}
putchar('\n');
return (0);
}
