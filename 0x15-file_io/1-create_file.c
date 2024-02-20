#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: of the created file
 * @text_content: null terminated string in the file
 *
 * Description: this func creates a file, gives it a name and
 * adds content to the file.
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int text_length;

	/* check filename for NULL */
	if (filename == NULL)
		return (-1);
	/* get a file descriptor for open with Read & Write for Owner only */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	/* check file descriptor for fail */
	if (fd == -1)
		return (-1);
	/* find the length of text_content */
	if (text_content != NULL)
	{
		text_length = 0;
		while (text_content[text_length] != '\0')
			text_length++;
		/* write into the file and return success, 1, or failure, -1 */
		bytes_written = write(fd, text_content, text_length);
		/* check write for fail */
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/* close file, literally */
	close(fd);

	/* return 1, for success */
	return (1);
}
