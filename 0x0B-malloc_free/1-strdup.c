#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to newly allocated space
 * @str: parameter
 * Return: null
 */
char *_strdup(char *str)
{
	char *copy;
	int i, n = 0;


	if (str == NULL)

		return (NULL);
	while (str[n] != '\0')
		n++;
	copy = (char *)malloc((sizeof(char) * n) + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		copy[i] = str[i];
	copy[n] = '\0';
	return (copy);
}
