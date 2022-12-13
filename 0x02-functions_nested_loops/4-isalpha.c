#include "main.h"

/**
 * _isalpha_return 1
 * @c: good 
 * always sucess
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

	
