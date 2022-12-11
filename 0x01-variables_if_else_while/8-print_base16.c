#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Sucess)
 */
int main(void)
{
	char ch;
	int c;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);

}
