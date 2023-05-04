#include "main.h"

/**
 * flip_bits - the counter the number of bits to flip
 * to obtain from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: a number of bits to flip up
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int exclusive = n ^ m;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			counter++;
	}

	return (counter);
}


