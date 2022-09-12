#include <stdio.h>
/**
 * main - Prints text
 * Description - Prints hexadecimals
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; ++a)
	{
		for (b = 1; b <= 9; ++b)
		{
			if (a == b || a > b)
			{
				continue;
			}
			putchar(a % 10 + '0');
			putchar(b % 10 + '0');
			putchar(',');
			putchar(' ');
			return (0);
		}
	}
}
