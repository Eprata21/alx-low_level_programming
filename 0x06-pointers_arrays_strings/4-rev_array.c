#include "main.h"

/**
 * reverse_array - function revers
 * @a:address of array
 * @n:number of elements of array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j++;
	}
}
