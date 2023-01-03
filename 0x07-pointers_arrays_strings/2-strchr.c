#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - string location place
 * @s: string  of character
 * @c:first occurance of characte
 * Return: null or string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
