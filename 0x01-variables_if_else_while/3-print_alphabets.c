#include <stdio.h>
/**
 * main - print alphabet lower and upper case
 *
 * Description: using main function
 * the program prints alphabet
 * Return: 0
 */
int main(void)
{
char alph, alphab;
for (alph = 'a' ; alph <= 'z' ; alph++);
{
putchar(alph);
}
for (alphab = 'A' ; alphab <= 'Z' ; alphab++);
{
putchar(alphab);
}
putchar('\n');
return (0);
}
