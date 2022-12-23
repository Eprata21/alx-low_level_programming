#include "main.h"
/**
 * *cap_string - function that capitalize all words of string
 * @str: the string value
 * Return: string capital
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char symbols[] = "\n\t,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (; str[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (str[i] == symbols[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
