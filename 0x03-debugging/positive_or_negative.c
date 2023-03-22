#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - function
 * @i : input to test
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{

	if (i >= 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
