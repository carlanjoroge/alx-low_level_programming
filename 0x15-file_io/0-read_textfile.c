#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text file print to STDOUT.
 * @textfile: text file being read
 * @n: number of letters to be read
 * Return: c - actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *textfile, size_t n)
{
	char *buf;
	ssize_t fd;
	ssize_t c;
	ssize_t t;

	fd = open(textfile, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * n);
	t = read(fd, buf, n);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (c);
}

