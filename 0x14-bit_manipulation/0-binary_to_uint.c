#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string to convert
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 0, powerTwo = 1, sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[j])
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		sum += (b[i] - '0') * powerTwo;
		powerTwo *= 2;
	}
	return (sum);
}
