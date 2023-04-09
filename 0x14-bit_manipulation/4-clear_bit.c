#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: on success 1, on failure -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1 UL << index) & *n);
	return (1);
}
