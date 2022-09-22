#include "main.h"
/**
 * main - check code
 *
 * Description: a function that checks for alphabetic character
 * Return:0 or 1
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
