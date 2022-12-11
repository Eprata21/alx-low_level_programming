#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 *Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
