#include "main.h"
/**
 * *rot13 - functon tt encodes a string usg rot13
 * @str: string variable
 * Return: str
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = n[j];
				break;
			}
		}
	}
	return (str);
}
