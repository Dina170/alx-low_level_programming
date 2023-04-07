#include "main.h"

/**
 * flip_bits - counts the number of bits you would need to flip
 * to get from one number to another.
 * @n: the number
 * @m: the number to flip
 *
 * Return: the number of bits you would need to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = 0, count = 0;

	xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			count++;

		xor >>= 1;
	}
	return (count);
}

