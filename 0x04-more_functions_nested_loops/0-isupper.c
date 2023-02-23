#include "main.h"
/**
 * _isupper - This Checks uppercase characters.
 * @c: char to check
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
