#include "main.h"
#include <unistd.h>
/**
 * _putchar - char c is written to stdout
 * @c: char to  be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
