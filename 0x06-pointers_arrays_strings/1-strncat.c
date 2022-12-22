#include "main.h"

/**
 * *_strncat - string concatination with n byte
 * @dest: the strig destination
 * @src: terminated to n
 * @n: integer value of string
 * Return: the destintion
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	for (k = 0; k < n; k++)
	{dest[j] = src[k];
		j++;
	}
	return (dest);
}
