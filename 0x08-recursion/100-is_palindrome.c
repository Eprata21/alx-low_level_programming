#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_rcursion(char *s);
/**
 * is_palindrome - checks the string palindrome
 * @s: string to reverse
 * Return: i if string palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of sting
 * @s: length
 * Return: length odf string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks if the character is palindrome
 * @s: string
 * @i: itrator
 * @len: string length
 * Return: 1 or 0 depend on chech up
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
