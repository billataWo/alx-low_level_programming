#include "main.h"

/**
 * clear_bit - place a value of a given bit to 0
 * @n: a pointer that the number against to change
 * @index: index of the bit place to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


