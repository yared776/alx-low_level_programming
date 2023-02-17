#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is it!!!
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a < 6 && a != 0)
	{
		printf("Last digit of %d ", n);
		printf(" is %d and is less than 6 and not 0\n", a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is 0\n", a);
	}
	else
	{
		printf("Last digit of %d", n);
		printf(" is %d and is greater than 5\n", a);
	}
	return (0);
}
