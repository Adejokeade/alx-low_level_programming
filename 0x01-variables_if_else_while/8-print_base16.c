#include <stdio.h>
/**
 * main - Prints text
 * Description - Prints hexadecimals
 * Return: 0
 */
int main(void)
{
	int y;
	int x;

	for (y = 0; y <= 9; ++y)
	{
		putchar(y % 10 + '0');
	}
		for (x = 'a'; x <= 'f'; ++x)
		{
			putchar(x);
		}
		putchar('\n');
		return (0);
}
