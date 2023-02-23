#include "main.h"

/**
 * print_numbers - output the numbers between 0 - 9.
 * Return: there is no return.
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
