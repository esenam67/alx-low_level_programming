#include "main.h"

/**
 * append_text_to_file - check func
 * @filename: ponter
 * @text_content: string
 *
 * Return: -1 on condition
 */

int append_text_to_file(const char *filename, char *text_content)
{
int x, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
x = open(filename, O_WRONLY | O_APPEND);
w = write(x, text_content, len);
if (x == -1 || w == -1)
return (-1);
close(x);
return (1);
}
