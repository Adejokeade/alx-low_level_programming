#include <stdio.h>
/**
 * main - Prints numbers
 * Description - Prints digit 0 to 9 but with a comma seperation
 * Return: 0
 */
int main(void)
{
	int y;
	int x;
	int z;

	x = ',';
	z = ' ';
	for (y = 0; y <= 9; y++)
	{
		putchar(y % 10 + '0');
		if (y == 9)
		{
			continue;
		}
		putchar(x);
		putchar(z);
	}
	putchar('\n');
	return (0);
}
