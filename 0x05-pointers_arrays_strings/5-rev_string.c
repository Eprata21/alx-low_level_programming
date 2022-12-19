#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: the reverse string
 */
void rev_string(char *s)
{
	char t = s[0];
	int c = 0;
	int rev;

	while (s[c] != '\0')
		c++;
	for (rev = 0; (s[rev]) >= 0; rev--)
	{
		c--;
		t = s[rev];
		s[rev] = s[c];
		s[c] = t;
	}
}
