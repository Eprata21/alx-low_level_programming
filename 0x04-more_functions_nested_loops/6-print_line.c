#include "main.h"
/**
 * print_line - number of time thatthe character
 * Return: the charatter
 */
void print_line(int n)
{
	if (n >= 1)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (n = 1; n >= 1; n++)
			_putchar('_');
	}
	_putchar('\n');
}
