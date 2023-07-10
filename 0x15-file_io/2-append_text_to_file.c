#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @p: A pointer to the name of the file.
 * @str: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *p, char *str)
{
	int o, w, len = 0;

	if (p == NULL)
		return (-1);

	if (str != NULL)
	{
		for (len = 0; str[len];)
			len++;
	}

	o = open(p, O_WRONLY | O_APPEND);
	w = write(o, str, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
