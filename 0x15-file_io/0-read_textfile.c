#include "main.h"
/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output
 * @filename: theis the file we want to read
 * @letters: how many byte do we want to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (wr);
}
