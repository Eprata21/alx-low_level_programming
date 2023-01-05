#include "main.h"

/**
 * _print_rev_recursion - function that string reverse
 * @s: input of the function
 * Return: always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
