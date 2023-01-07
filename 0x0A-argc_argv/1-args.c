#include "main.h"
#include <stdio.h>

/**
 * main - function name
 * @argc: size of
 * @argv: pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
