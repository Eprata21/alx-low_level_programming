#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * _putchar - character
 *
 * @c: char to print
 *
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
