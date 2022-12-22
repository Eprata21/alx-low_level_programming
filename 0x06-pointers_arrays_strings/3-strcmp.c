#include "main.h"
/**
 * _strcmp - the function compire two strings
 * @s1:strng array
 * @s2: string array
 * Return:s1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
