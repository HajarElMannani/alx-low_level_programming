#include "main.h"
/**
 *append_text_to_file -  function that appends
 *text at the end of a file
 *@filename: file to append in
 *@text_content: text to append
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p, len, wr;
len = 0;
if (filename == NULL)
return (-1);
p = open(filename, O_WRONLY | O_APPEND);
if (p == -1)
return (-1);
if (text_content == NULL)
return (1);
if (text_content != NULL)
{
while (text_content[len] != '\0')
{
len++;
}
}
wr = write(p, text_content, len);
if (wr == -1 || wr != len)
return (-1);
close(p);
return (1);
}
