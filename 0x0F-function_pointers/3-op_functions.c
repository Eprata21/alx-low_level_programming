#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add -  addinf two numbers
 * @a: parameter
 * @b: parameter
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -  subtract two numbers
 * @a: parameter
 * @b: parameter
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -  mul two numbers
 * @a: parameter
 * @b: parameter
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  divinf two numbers
 * @a: parameter
 * @b: parameter
 * Return: div
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -  modinf two numbers
 * @a: parameter
 * @b: parameter
 * Return: modules
 */

int op_mod(int a, int b)
{
	return (a % b);
}
