#include <stdio.h>
/**
 * main - print the lowercase
 *
 * Description: using main function
 * this program will print the lowercase alphabet
 * Return: 0
 */
int main(void)
{
char alp;
for (alp = 'a' ; alp <= 'z' ; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
