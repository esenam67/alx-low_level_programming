#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
