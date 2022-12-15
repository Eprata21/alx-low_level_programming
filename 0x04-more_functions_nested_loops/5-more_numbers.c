#include "main.h"
/**
 * more_numbers - print more number
 *
 * Return: more number
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
		}
		j++;
		_putchar(i);
	}
	i++;
	_putchar('\n')
}

