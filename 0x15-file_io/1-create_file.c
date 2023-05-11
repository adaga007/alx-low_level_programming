#include "main.h"
/**
 * create_file - a function that creates a file.
 * and can read and wirte any thing inside
 * @filename: filename
 * @text_content: What is contained in the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{

		while (text_content[length])
			length++;
		wrote = write(fd, text_content, length);
		if (wrote == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
