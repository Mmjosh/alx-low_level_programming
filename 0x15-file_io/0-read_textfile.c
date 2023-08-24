#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text from a file and output to STDOUT.
 * @filename: Path to the text file to be read
 * @letters: Maximum number of letters to read
 * Return: Number of bytes read and output, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytes_output;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	bytes_output = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	return (bytes_output);
}
