#include <stdio.h>

/**
 * adding natural numbers of multiple 3 and 5
 *
 * Return: 0 always;
 */
int main(void)
{
	int main()
	{
		int i, sum = 0;
		for (i = 0; i < 1024; i++)
		{
			if (i % 3 == 0|| i % 5 == 0)
				sum = sum + i;
		}
		printf("%d\n", sum);
		return 0;
	}
}
