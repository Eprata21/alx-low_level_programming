#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of array
 * @n: the number of element
 * @a: addres of array
 * Return: the number
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - i))
			printf(", ");
	}
	printf("\n");
}
