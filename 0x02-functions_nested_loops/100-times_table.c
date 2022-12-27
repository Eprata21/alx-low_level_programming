#include "main.h"

/**
 * print_times_table - print the table
 * @n: times tible
 * Return: void
 */
void print_times_table(int n)
{
	int i, v, b;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			v = a * b;
			if (b == 0)
				_putchar('0' + v);
			else if (v < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + v);
			}
			else if (v < 100)
			{
				_putchar(' ');
				_putchar('0' + v / 10);
				_putchar('0' + v % 10);
			}
			else
			{
				_putchar('0' + v / 100);
				_putchar('0' + (v / -100) / 10);
				_putchar('0' + v % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
