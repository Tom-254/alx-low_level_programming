#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file
 * @text_content: content to write to file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can
 * not be written)
 */

int create_file(const char *filename, char *text_content)
{
	int file_length;
	int fd, wc;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);

		close(fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	for (file_length = 0; text_content[file_length]; file_length++)
	{}

	wc = write(fd, text_content, file_length);
	if (wc == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);

}
