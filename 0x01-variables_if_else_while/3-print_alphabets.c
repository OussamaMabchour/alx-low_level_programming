#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;
	char upp;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);
	putchar('\n');

	return (0);
}
