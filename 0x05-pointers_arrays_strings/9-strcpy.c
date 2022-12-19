#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string
 * @dest: distination
 * @src: source
 * Return: the value
 */
char *_strcpy(char *dest, char *src)
{
	int cp = 0;
	
	while (*(src + cp) != '\0')
	{
		*(dest + cp) = *(src + cp);
		cp++;
	}
	*(dest + cp) = '\0';
	return (dest);
}

