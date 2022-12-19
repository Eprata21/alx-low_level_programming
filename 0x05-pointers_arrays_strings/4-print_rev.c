#include "main.h"

/**
 * print_rev - printing a string that is reverse
 * Return: the revrse
 * @s: character
 */
void print_rev(char *s)
{
	int rev;

	for (rev = 0; rev >= 0; rev++)
	{
		if (s[rev] == '\0')
			break;
	}
	for (rev--; rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
