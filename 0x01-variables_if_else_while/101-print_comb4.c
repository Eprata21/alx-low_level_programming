#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return: 0 (Sucess)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
