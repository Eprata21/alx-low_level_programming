#include <stdio.h>

/**
 * main -main function
 * description: printing the first 50 numbers by fibonacci
 * Return: always (0) success;
 */
int main(void)
{
	int i, j, n, k;

	i = 0;
	j = 1;
	k = i + j;

	for (n = 3; n <= 50; n++)
	{
		printf("%d ,", k);
		i = j;
		j = k;
		k = i + j;
	}
	return (0);
}
