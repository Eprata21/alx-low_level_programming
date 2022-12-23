#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @str:replace string
 * Return:the encode string
 */
char *leet(char *str)
{
	int arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (str[i] == arr[j])
				str[i] = replace[j / 2];
		}
	}
	return (str);
}
