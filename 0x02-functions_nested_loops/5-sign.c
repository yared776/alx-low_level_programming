#include "main.h"
/**
 * print_sign - Sign of a number.
 * @n: is a number
 * Return: 1 (+ve) 0 (Zero) -1 (-ve)
 */
int print_sign(int n)
{
	char p = '+';
	char n = '-';
	char z = '0';

	if (n > 0)
	{
		_putchar(p);
		return (1);
	}
	else if (n == 0)
	{
		_purchar(z);
		return (0);
	}
	else
	{
		_putchar(n);
		return (-1);
	}
}
