#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n ststus:
 *              greater than, is zero and is not less than 6.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, d);
	else if (d == 0)
		printf("Last digit of %i is %i and is 0\n", n, d);
	else if (d < 6 && d != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, d);
	return (0);
}
