#include "main.h"
/**
 *create_file - unction that creates a file
 *@filename: file to create
 *@text_content: text to write in file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int len, wr, p;
len = 0;
if (filename == NULL)
return (-1);
p = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (p == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len] != '\0')
{
len++;
}
wr = write(p, text_content, len);
}
 if (wr == -1)/* || wr != len*/
return (-1);
close(p);
return (1);
}
