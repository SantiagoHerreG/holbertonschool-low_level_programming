#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads from a file and prints to std output
 * @filename: name of the file to be read
 * @letters: number of chars to be read and printed
 * Return: the number of chars printed or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_chars, write_chars;
	char buffer[letters];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_chars = read(fd, buffer, letters);

	close(fd);

	if (read_chars == -1)
		return (0);

	write_chars = write(STDOUT_FILENO, buffer, read_chars);

	if (write_chars == -1)
		return (0);

	return (write_chars);
}
