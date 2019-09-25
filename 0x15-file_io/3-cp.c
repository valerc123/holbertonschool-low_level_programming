#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @argc: num of args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int size_to, size_from, file_to, file_from, close_file;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	size_from = read(file_from, buf, 1024);
	if (size_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	size_to = write(file_to, buf, size_from);
	if (size_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (size_from == 1024)
	{
		size_from = read(file_from, buf, 1024);
		size_to = write(file_to, buf, size_from);
	}
	/* close file */
	close_file = close(file_from);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	close_file = close(file_to);
	if (close_file == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return (0);
}
