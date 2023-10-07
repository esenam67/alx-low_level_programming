#include "main.h"

/**
* create_file - Creates a file.
* @filename: A pointer to the name of file
* @text_content: A pointer to a string
* Description: Create a function that creates a file
*
* Return: return -1 if filename is NULL
*/

int create_file(const char *filename, char *text_content)
{
int c, x, y = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (y = 0; text_content[y];)
y++;
}
c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
x = write(c, text_content, y);
if (c == -1 || x == -1)
return (-1);
close(c);
return (1);
}
