#include "main.h"

/**
 * set_bit - place a bit to a given index to 1
 * @n: a pointer that the number against to change
 * @index: index of the bit to place to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


