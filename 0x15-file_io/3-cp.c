#include "main.h"

/**
 * error_message - formats errors
 * @exit_status: to exit func
 * @message: error message
 * @argument: command line argument
 * @fd: file descriptor
 *
 * Return: nothing
 */

void error_message(int exit_status, char *message, char *argument, int fd)
{
	if (exit_status == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(exit_status);
	}
	else if (exit_status == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(exit_status);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't %s from file %s\n", message, argument);
		exit(exit_status);
	}
}


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
	char string_buffer[BUFSIZ];

	if (argc != 3)
		error_message(97, "none", "none", -1);
	file_f = open(argv[1], O_RDONLY);
	if (file_f == -1)
		error_message(98, "read", argv[1], -1);
	file_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (rd > 0)
	{
		rd = read(file_f, string_buffer, BUFSIZ);
		if (file_t == -1 || (write(file_t, string_buffer, rd)) != rd)
			error_message(99, "write", argv[2], -1);
	}
	if (rd == -1)
		error_message(98, "read", argv[1], -1);
	c_file_f = close(file_f);
	c_file_t = close(file_t);
	if (c_file_f == -1)
		error_message(100, "none", "none", file_f);
	if (c_file_t == -1)
		error_message(100, "none", "none", file_t);

	return (0);
}
