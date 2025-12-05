#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - Prints an error message to STDERR and exits
 * @code: Exit code
 * @message: Error message format
 * @arg: Argument to include in the message
 */
void error_exit(int code, const char *message, const char *arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[1024];

    if (argc != 3)
        error_exit(97, "Usage: cp %s %s\n", "file_from file_to");

    /* Open source file for reading */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	/* Open destination file for writing, create if not exists, truncate if exists */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

	/* Copy the content in chunks of 1024 bytes */
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	/* Close both file descriptors */
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[1]);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[2]);

	return 0;
}
