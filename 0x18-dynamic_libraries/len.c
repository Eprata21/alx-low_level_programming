#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of the string
 * @s: string
 * Return: the length of string
 */
int _strlen(char *s)
{
        int i = 0;

        while (*(s + i) != '\0')
                i++;
        return (i);
}
