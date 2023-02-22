#include "main.h"
/**
 * _isalpha - checks for alphabetic
 * @c: Alphabetic character
 * Return: 1 (Alphabet) 0 (Other)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
