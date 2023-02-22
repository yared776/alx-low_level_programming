#include "main.h"
/**
 * print_sign - Sign of a number.
 * @n: is a number
i * Return: 1 (+ve) 0 (Zero) -1 (-ve)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
