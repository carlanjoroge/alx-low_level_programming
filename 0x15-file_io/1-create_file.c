#include "main.h"

/**
 * create_file - Creates a file.
 * @p: A pointer to the name of the file to create.
 * @str: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *p, char *str)
{
	int fd, w, len = 0;

	if (p == NULL)
		return (-1);

	if (str != NULL)
	{
		for (len = 0; str[len];)
			len++;
	}

	fd = open(p, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, str, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
