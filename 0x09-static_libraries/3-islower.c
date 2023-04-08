#include "main.h"

/**
 * _islower - c is lower
 * @c: An input character
 * Return: 1 if islower and 0 if not
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
		if (i == c)
			lower = 1;
	return (lower);
}
