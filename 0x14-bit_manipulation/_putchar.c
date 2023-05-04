#include <unistd.h>

/**
 * _putchar - It writes the char c to std out
 * @c: the char that will be print
 *
 * Return: On success 1.
 * On error, -1 will returned, and error is set in line.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
