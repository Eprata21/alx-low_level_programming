#include <stdio.h>

int operation(int a, int b) 
{
	int operator;

	if (operator == '+')
		return a + b;
	if (operator == '-')
	       	return a - b;
	if (operator == '*')
		return a * b;
	if (operator == '/')
		return a / b;
}
