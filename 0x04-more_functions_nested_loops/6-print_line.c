#include "main.h"

/**
 * print_line - outputs straight line n times.
 * @n: n times straight line is printed.
 * Return: there is no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
