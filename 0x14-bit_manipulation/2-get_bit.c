#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a dec no
 * @n: number to search
 * @i: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int i)
{
	int bit_value;

	if (i > 63)
		return (-1);

	bit_value = (n >> i) & 1;

	return (bit_value);
}
