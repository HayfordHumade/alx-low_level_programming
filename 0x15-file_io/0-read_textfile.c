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
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	/* check filename for NULL */
	if (filename == NULL)
		return (0);
	/* create file descriptor for opening file with Read Only */
	fd = open(filename, O_RDONLY);
	/* check file descriptor for error */
	if (fd == -1)
		return (0);
	/* allocate memory for the buffer where the read data will be stored */
	buffer = (char *)malloc(letters + 1);
	/* check buffer for NULL */
	if (buffer == NULL)
		return (0);
	/* returns number of letters read */
	bytes_read = read(fd, buffer, letters);
	/* check bytes_read for error */
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* terminate the buffer with NULL */
	buffer[bytes_read] = '\0';
	/* write to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	/* check for the right number of bytes written */
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* free allocated memory */
	free(buffer);
	/* return bytes read and written */
	return (bytes_written);
}
