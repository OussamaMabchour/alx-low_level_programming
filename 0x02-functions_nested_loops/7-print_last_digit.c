#include "main.h"

/**
 * print_last_digit - function
 * @l : the input
 * Retun: value of the last digit
 */

int print_last_digit(int l)
{
	int n;

	if (l < 0)
		n = -1 * (l % 10);
	else
		n = l % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
