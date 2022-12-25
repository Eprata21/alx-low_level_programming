#include "main.h"

/**
 * _isalpha - check the letters or others
 * @c: parametre
 * Return: 1 if appercase and lowercase
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
