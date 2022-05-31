#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars is  not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int n;

	if (b == '\0')
		return (0);

	for (n = 0; b[n];)
		n++;

	for (n -= 1; n >= 0; n--)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);

		num += (b[n] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
