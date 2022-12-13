#include "main.h"

/**
 * _isalpha - function name
 * @c: parametre
 * Reutrn : 1 t 0 false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
