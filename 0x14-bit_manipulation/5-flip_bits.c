#include "main.h"

/**
 * flip_bits - counts the no of bits to be changed
 * to get from 1 no to another
 * @j: first number
 * @k: second number
 *
 * Return: no of bits to be changed
 */
unsigned int flip_bits(unsigned long int j, unsigned long int k)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = j ^ k;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
