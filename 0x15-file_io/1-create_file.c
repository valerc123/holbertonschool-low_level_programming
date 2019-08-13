#include "holberton.h"
/**
 * _strlen - This function returns the length of a string
 * @s: Variable that contains a character array to be counted
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int  n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
/**
 * create_file - This function creates a file
 * @filename: the name of the file to create
 * @text_content: string to write in to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	len = _strlen(text_content);
	buf = malloc(sizeof(char) * len);
	if (!buf)
		return (-1);

	write(fd, text_content, len);
	close(fd);
	free(buf);
	return (1);
}
