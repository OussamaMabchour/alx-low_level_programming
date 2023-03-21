#include "main.h"

/**
 * print_sign - function
 * @c : input of the function
 * Return: 1 or 0 or -1
 */

int print_sign(int c)
{
	int sign;

	if (c > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (c < 0)
	{
		_putchar('-');
		sign = -1;
	}
	else
	{
		_putchar('0');
		sign = 0;
	}
	return (sign);
}
