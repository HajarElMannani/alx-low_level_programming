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
 *main - copy content of file into another
 *@argc: Number of arguments
 *@argv: arguments
 *Return: 0 when success
 */
int main(int argc,char *argv[])
{
int file1, file2, len, wr, cl1, cl2;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = buff(argv[2]);
file1 = open(argv[1], O_RDONLY);
if (file1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file1);
exit(99);
}
do{
len = read(file1, buffer, 1024);
if (len == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
wr = write(file2, buffer, len);
if (wr == -1 || wr != len)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
}while (len > 0);
cl1 = close(file1);
cl2 = close(file2);
if (cl1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close %d\n",file1);
exit(100);
}
if (cl2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close %d\n", file2);
exit(100);
}
return (0);
}
