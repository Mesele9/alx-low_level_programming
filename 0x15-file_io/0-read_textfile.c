#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile -  a function tahtreads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of lettters it reads and print
 *
 * Return: the actual number of letters it could read and print
 * or 0 if file can not be opened, read or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (r);
}
