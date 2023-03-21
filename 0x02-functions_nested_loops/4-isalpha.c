#include "main.h"

/**
 * _isalpha - is an alphabet
 * @c : input of the function
 * Return: 1 if true 0 if not
 */

int _isalpha(int c)
{
	char i;
	char alpha = 0;

	for (i = 'a'; i <= 'z'; i++)
		if (i == c)
			alpha = 1;
	for (i = 'A'; i <= 'z'; i++)
		if (i == c)
			alpha = 1;
	return (alpha);
}
