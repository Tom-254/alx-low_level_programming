#include "main.h"

/**
 * append_text_to_file - appends text at the
 * end of a file.
 * @filename: filetobe appended
 * @text_content: content to write to file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can
 * not be written)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_length;
	int fd, wc;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY);
		if (fd == -1)
			return (-1);

		close(fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
