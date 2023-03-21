#include "main.h"

/**
 * _abs - valeur absolue
 *@r : input
 * Return: la valeur absolue
 */

int _abs(int r)
{
	int abs;

	if (r >= 0)
		abs = r;
	else
		abs = -1 * r;
	return (abs);
}
