#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: Number to be checked
 * Return: 1 if the c is lower case 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
