#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n, last, count;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	if (last == 0)
	{
		printf("last digit of %d is %d and is zero\n", n, last);
	}
	if (last < 6 && last != 0)

	{
		printf("last digit of is %d  and is %d less than 6 and not 0\n", n, last);
	}
	/* your code goes there */
	return (0);
}


