#include "main.h"

/**
 *This Checks uppercase characters.
 *
 *
 * Return: 1 if character is uppercase and returns 0 if it is lowercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
