#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fctnl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file to open
 * @letters: number of letters to read and print
 * Return: no of letters read and printed, or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff = NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(buff);
		return (0);
	}

	fdr = read(fdo, buff, letters);
	if (fdr < 0)
	{
		free(buff);
		return (0);
	}

	fdw = write(STDOUT_FILENO, buff, fdr);
	free(buff);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
