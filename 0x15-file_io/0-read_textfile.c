#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int  f;
ssize_t re, wr;
if (filename == NULL)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
re = read(f, buffer, letters);
if (re == -1)
{
free(buffer);
close(f);
return (0);
}
wr = write(STDOUT_FILENO, buffer, re);
if (wr == -1)
{
free(buffer);
close(f);
return (0);
}
close(f);
return (re);
}

