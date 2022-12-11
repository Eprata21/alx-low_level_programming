#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Sucess)
 */
int main(void)

{
	int a;
	int b;

	for (a = '0'; a <= '8'; a++)
		b = a + 1;
	for (b = b; b <= '9'; b++)
		putchar(a);
	putchar(b);

	if (a <= '7' && b <= '9')
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}

