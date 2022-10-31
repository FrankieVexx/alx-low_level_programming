#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string character(0s and 1s)
 *
 * Return:The converted number or 0 if the character is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0, mult = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		nm += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (nm);
}
