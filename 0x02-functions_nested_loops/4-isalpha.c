#include "main.h"

/**
 * _isalpha - god
 * @c : good 
 * reutrn : always sucess
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
