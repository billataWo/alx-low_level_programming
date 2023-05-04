#include "main.h"

/**
 * get_endianness - checks if it is small or big endianness
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

