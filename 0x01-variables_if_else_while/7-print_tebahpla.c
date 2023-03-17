#include <stdio.h>

/**
 * main - reverse alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
