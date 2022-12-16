#include "main.h"
/**
 * print_line - number of time thatthe character
 * @n: number of lines
 * Return: the charatter
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
