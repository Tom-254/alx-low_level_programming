#include "main.h"

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_f, file_t, rd, c_file_f, c_file_t;
	char buff[BUFSIZ];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_f = open(argv[1], O_RDONLY);
	if (file_f  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	while (rd > 0)
		rd = read(file_f, buff, BUFSIZ;
		if (file_t == -1 || (write(file_t, buff, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c_file_f = close(file_f);
	c_file_t = close(file_t);
	if (c_file_f == -1 || c_file_t == -1)
	{
		if (c_file_f == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		else if (c_file_t == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_t);
		exit(100);
	}
	return (0);
}
