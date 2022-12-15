#include "main.h"
/**
 * print_numbers - 0-9 number
 *
 * Return: the answer
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
