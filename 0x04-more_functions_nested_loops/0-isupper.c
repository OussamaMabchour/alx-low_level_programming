#include "main.h"

/**
 * _isupper - function
 * @c : input
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	char i;
	int n = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
