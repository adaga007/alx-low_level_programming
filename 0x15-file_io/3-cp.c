#include "main.h"
/**
 * main - a program that copies the content of a file to another file.
 * You will provide where it will put the content
 * @ac: argument count
 * @av: arguments vector
 * Return: value
 */
int main(int ac, char *av[])
{
	int fsrc, fdest, rd, clf, clt;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fsrc = open(av[1], O_RDONLY);
	if (fsrc  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(fsrc, buffer, 1024)) > 0)
		if (fdest == -1 || (write(fdest, buffer, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	clf = close(fsrc);
	clt = close(fdest);
	if (clf == -1 || clt == -1)
	{
		if (clf == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fsrc);
		else if (clt == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdest);
		exit(100);
	}
	return (0);
}
