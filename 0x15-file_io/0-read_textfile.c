#include "holberton.h"

/**
 * read_textfile - reads a text file and prints standard output.
 * @filename: name of the files
 * @letters:  number of letters it should read and print.
 * Return: number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*create the file*/
	int strlen;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY); /*open file read only*/
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	strlen = read(fd, buf, letters);
	if (write(STDOUT_FILENO, buf, strlen) != strlen)
		return (0);
	close(fd);
	free(buf);
	return (strlen);
}
