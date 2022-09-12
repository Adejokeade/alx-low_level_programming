#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * folowed by a new line using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}