#include "main.h"

/**
 * _strlen - a function that appends text at the end of a file.
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
int f, wr;
if (!filename)
return (-1);
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
return (-1);
if (!text_content)
{
close(f);
return (1);
}
wr = write(f, text_content, _strlen(text_content));
if (wr == -1 || wr != _strlen(text_content))
{
close(f);
return (-1);
}
close(f);
return (1);
}

