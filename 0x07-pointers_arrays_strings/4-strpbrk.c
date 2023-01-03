#include "main.h"
#include <stdlib.h>

/**
 * *_strpbrk - searchs the string for any set of byte
 * @s: occurance of string
 * @accept: mutches of the string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
