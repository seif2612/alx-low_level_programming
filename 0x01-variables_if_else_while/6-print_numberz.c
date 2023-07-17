#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0-9 using putchar while using int variable
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		/*convert digit to ascii representation*/
		putchar(d + '0');
		d++;
	}
	putchar('\n');

	return (0);
}
