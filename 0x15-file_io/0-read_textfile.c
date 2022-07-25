#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: size of content to read
 * Return: the actual number of letters it
 * could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *string_buffer;
	int fd, rc, wc;

	if (file_name == NULL)
		return (0);

	string_buffer = malloc(letters);
	if (string_buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(string_buffer);
		return (0);
	}

	rc = read(fd, string_buffer, letters);
	if (rc == -1)
	{
		free(string_buffer);
		close(fd);
		return (0);
	}

	wc = write(STDOUT_FILENO, string_buffer, rc);
	if (wc == -1)
	{
		free(string_buffer);
		close(fd);
		return (0);
	}

	free(string_buffer);
	close(fd);

	return (wc);
}
