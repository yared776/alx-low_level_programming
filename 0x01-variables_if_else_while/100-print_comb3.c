#include <stdio.h>
/**
 * main - Combination of two digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		putchar(y + '0');
		if (x < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
