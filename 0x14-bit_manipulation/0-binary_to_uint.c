#include "main.h"

/**
 * bin_to_unsigned_int - converts a binary no. to unsigned int
 * @b: string that has the binary no.
 *
 * Return: the converted no.
 */
unsigned int bin_to_unsigned_int(const char *b)
{
	int j;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[j] - '0');
	}

	return (decimal_value);
}
