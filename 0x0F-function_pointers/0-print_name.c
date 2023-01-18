#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - functint that prints the name
 * @name: parameter
 * @f: pointer
 * Return: noting
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
