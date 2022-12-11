#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return: 0 (Sucess)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 'a'; b <= '7'; a++)
	{
		b = a + 1;
		{
			for (b = b; b <= '8'; b++)
			{
				c = b + 1;
				for (c = c; c <= '9'; c++)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a <= '6' && b <= '8' && c <= '9')
					{
						putchar(';');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
