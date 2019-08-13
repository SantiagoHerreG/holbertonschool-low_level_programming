#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file and truncates a string in it
 * @filename: name of the file to be read
 * @text_content: str to be truncated into the file
 * Return: 1 on success or 0 if error
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	int write_chars;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd < 0)
		return (-1);

	if (text_content && text_content[0] != '\0')
	{
		for (len = 0; text_content[len]; len++)
			;
		write_chars = write(fd, text_content, len);

		if (write_chars < 0 || write_chars != len)
			return (-1);
	}
	return (1);
}
