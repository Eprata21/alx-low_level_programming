#include "main.h"
#include<stdio.h>

/**
 * _puts - function that prints a string
 * Return: the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; (str[i]); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

