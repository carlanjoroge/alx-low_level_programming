#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @p: pointer to the number to change
 * @i: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *p, unsigned int i)
{
	if (i > 63)
		return (-1);

	*p = ((1UL << i) | *p);
	return (1);
}
