#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
* 0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	r = read(fd, buf, letters);

	wr = write(STDOUT_FILENO, buf, r);

	if (wr == -1)
		return (0);

	free(buf);
	close(fd);
	return (wr);
}
