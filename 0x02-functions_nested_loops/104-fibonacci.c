#include <stdio.h>

/**
 * main -main function
 * description: printing the first 50 numbers by fibonacci
 * Return: always (0) success
 */
int main(void)
{
	unsigned int long i, j, k;
	int n;

	i = 0;
	j = 1;
	k = i + j;
	for (n = 1; n <= 98; ++n)
	{
		if (n == 98)
		{
			printf("%lu\n", k);
		}
		else
		{
			printf("%lu, ", k);
			i = j;
			j = k;
			k = i + j;
		}
		return (0);
	}
}
