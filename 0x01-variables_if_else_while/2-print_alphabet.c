#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet letters using while loop and putchar
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
