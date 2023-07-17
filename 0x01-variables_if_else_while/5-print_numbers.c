#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%i", d);
		d++;
	}
	printf("\n");

	return (0);
}
