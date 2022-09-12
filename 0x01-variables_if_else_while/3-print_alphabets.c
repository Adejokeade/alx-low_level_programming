#include <stdio.h>
/**
 * main - Prints alphabets in lowercase, and then in uppercase
 *
 * followed by a new line
 *
 * Retun: Always 0 (Success)
 *
 */

int main(void)
{
	int c;

		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
