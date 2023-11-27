#include "main.h"
/**
 *read_textfile - function that reads a text file
 *and prints it to the POSIX standard output
 *@filename: name of file to read
 *@letters: number of letters it should read and print
 *Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int p;
ssize_t len, wr;
char *buffer;
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
p = open(filename, O_RDONLY);
if (p == -1)
{
free(buffer);
return (0);
}
len = read(p, buffer, letters);
if (len == -1)
{
free(buffer);
return (0);
}
wr = write(STDOUT_FILENO, buffer, letters);
if (wr == -1 || wr != len)
{
free(buffer);
return (0);
}
free(buffer);
close(p);
return (len);
}
