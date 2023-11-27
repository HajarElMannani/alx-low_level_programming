#include "main.h"
/**
 *buff - create buffer
 *@str: filename
 *Return: buffer
 */
char *buff(char *str)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
exit(99);
}
return (buff);
}
/**
 *closef - close file
 *@file: file descriptor
 *Return: Nothing
 */
void closef(int file)
{
int cl;
cl = close(file);
if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close %d\n", file);
exit(100);
}
}
/**
 *main - copy content of file into another
 *@argc: Number of arguments
 *@argv: arguments
 *Return: 0 when success
 */
int main(int argc, char *argv[])
{
int file1, file2, len, wr;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = buff(argv[2]);
file1 = open(argv[1], O_RDONLY);
file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
len = read(file1, buffer, 1024);
do {
if (len == -1 || file1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
wr = write(file2, buffer, len);
if (file2 == -1 || wr == -1 || wr != len)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file1);
free(buffer);
exit(99);
}
} while (len > 0);
free(buffer);
closef(file1);
closef(file2);
return (0);
}
