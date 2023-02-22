#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: 0 is the best :)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
