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
	int filed, printed, wrote;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	filed = open(filename, O_RDWR);
	if (filed == -1)
		return (0);
	printed = read(filed, buffer, letters);
	if (printed == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buffer, printed);
	if (wrote == -1)
		return (0);
	if (close(filed) == -1)
		return (0);
	free(buffer);
	return (printed);
}
