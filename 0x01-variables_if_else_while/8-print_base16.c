#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base16 in lower case
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		putchar(d);
		if (d == 57)
			d += 39;
		d++;
	}
	putchar('\n');

	return (0);
}
