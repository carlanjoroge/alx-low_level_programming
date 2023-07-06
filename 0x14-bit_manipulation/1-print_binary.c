#include "main.h"

/**
 * print_binary - prints bin equivalent of a dec no
 * @a: no to be printed in bin
 */
void print_binary(unsigned long int a)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = a >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
