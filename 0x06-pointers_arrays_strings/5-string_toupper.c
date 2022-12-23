#include "main.h"

/**
 * *string_toupper - uncion of changes all lowercase to uppercase
 * @str: parameter
 * Return: the characters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
