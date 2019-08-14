#include "holberton.h"
#include <errno.h>

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
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the name of the file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		if (errno == ENOENT || errno == EROFS)
		{
			return (-1);
		}
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	close(fd);

	return (1);
}
