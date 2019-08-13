#include "holberton.h"
/**
 * create_file - This function creates a file
 * @filename: the name of the file to create
 * @text_content: string to write in to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_APPEND, 0600);
	if (fd == -1)
	{
		write(1, "fails", 5);
		return (-1);
	}
	if (!text_content)
	{
		creat(filename, 0600);
	}
	close(fd);
	return (1);
}
