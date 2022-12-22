#include "main.h"

/**
 * *_strncpy - the function coping string
 * @dest:string
 * @src:string
 * @n:the number of copy
 * Return: the srcncpy value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')

		i++;

	while (dest[i + j] != '\0')
		j++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
