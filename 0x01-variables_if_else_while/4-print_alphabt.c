#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i == 'e' && i == 'q')
			i = i + 1;
		else 
			putchar(i);
	putchar('\n');
		
	return (0);
}

