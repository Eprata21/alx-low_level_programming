#include "main.h"

/**
 * _isdigit -checker
 * @c: put
 * Return: always 0.
 */
int _isdigit(int c)
{
	if ((c <= 'a' && c <= 'z') && (c <= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
