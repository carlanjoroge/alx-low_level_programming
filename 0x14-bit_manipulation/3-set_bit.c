#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: on success 1, on failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1 UL << index) | *n);
	return (1);
}