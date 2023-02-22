#include "main.h"
/**
 * main - Prints _putchar
 *
 * return 0 (Success)
 */
int main(void)
{
	char *pointer = "_putchar";

	while (*pointer);
	{
		_putchar(*pointer);
		pointer++;
	}
	_putchar('\n');
	return (0);
}
