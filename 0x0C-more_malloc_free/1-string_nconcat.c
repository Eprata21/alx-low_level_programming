#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concaatenates two string
 * @s1: string one
 * @s2: string two
 * @n: byte of string
 * Return: the pointer stirng
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int b = n;
	int i, j;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (b >= len2)
	{
		b = len2;
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < b; j++)
	{
		s3[i++] = s2[j];
	}
	s3[i++] = '\0';
	return (s3);
}
