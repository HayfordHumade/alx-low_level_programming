#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: of the text file
 * @letters: number of letters it should read and print
 *
 * Description: reads a text file and prints it to the POSIX standard output
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_read, bytes_written, total_bytes_written = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);

	while (letters > 0)
		bytes_read = read(fd, buffer, BUFFER_SIZE);

	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	if (bytes_read == 0)
		break;

	if (bytes_read > letters)
		bytes_read = letters;
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}

	total_bytes_written += bytes_written;
	letters -= bytes_written;
	close(fd);
	return (total_bytes_written);
}
